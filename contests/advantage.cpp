#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        // int max1 = INT_MIN, max2 = INT_MIN;
        priority_queue <int> pq;
        for(int i = 0; i < n; i++){
           cin >> v[i]; 
           pq.push(v[i]);
        } 
        int max1 = pq.top();
        pq.pop();
        int max2 = pq.top(); 
        // for(int i = 0; i < n; i++){
        //     if(v[i] > max1){
        //         max2 = max1;
        //         max1 = v[i];
        //     }
        //     else if(v[i] > max2 && v[i] != max1){
        //         max2 = v[i];
        //     }
        // }

        for(int i = 0; i < n; i++){
            if(v[i] == max1)
                cout << v[i] - max2<<" ";
            else
                cout << v[i] - max1<<" ";
        }
        cout<< endl;
    }
    return 0;
}