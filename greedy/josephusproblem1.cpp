#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1); // 1->starting index
    int start = 1;
    while(v.size() != 0){
        vector<bool> vis(v.size()); // keep changing
        int sz = vis.size(); // keeps changing after every iteration initially n
        //to do if size = 0? start = 0
        if(sz == 1) start = 0;
        for(int i = start; i < sz; i+= 2){
            vis[i] = true;
            cout << v[i] << " ";
        }
        // store in a temporary vector
        vector<int> temp;
        for(int i = start; i < sz; i++){
            if(!vis[i]) temp.push_back(v[i]);
        }
        v = temp; // now new vector
        //decide sart index
        if(sz%2 == 0 &&  start==0)
                start = 0;
        else if(sz%2 == 1 && start == 0){
            start = 1;
        }else if(sz%2 == 0 && start == 1){
            start =1;
        }else{
            start = 0;
        }

    }
    return 0;
}