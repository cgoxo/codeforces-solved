#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n; 
    cin >> n;
    vector<ll int> v(n);
    iota(v.begin(), v.end(), 1);
    // for(auto x: v) cout << x;
    int startIdx = 1;
    while(!v.empty()){
        vector<ll int> temp;
        vector<bool> visited(v.size());
        int currSize = v.size(); //initially n
        // print and update vis
        for(ll int i = startIdx; i < currSize; i+=2){
            visited[i] = true;
            cout << v[i] << " ";
        }
        //remove and adding to temp
        for(ll int i = 0; i < currSize; i++){
            if(!visited[i])
                temp.push_back(v[i]);
        }
        // updated vector with removed elements
        v = temp;
        // decide starting index earlier starting index and size compare
        if(currSize % 2 == 0 && startIdx == 1) // initial even
            startIdx = 1;
        else if(currSize % 2 != 0 && startIdx == 1) // initial odd
            startIdx = 0;
        else if(currSize % 2 == 0 && startIdx == 0)
            startIdx = 0;
        else if(currSize % 2 != 0 && startIdx == 0)
            startIdx = 1;

    }
    cout<< endl;
    return 0;
}