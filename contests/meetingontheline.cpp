#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    cout<<fixed;
    cout<<setprecision(10);

    while(t--){
        int n; cin>>n;
        long int x[n], t[n];
        for(int i = 0; i < n; i++) cin>>x[i];
        for(int i = 0; i < n; i++) cin>>t[i];
        long int maxdis = INT_MIN, mindis = INT_MAX;
        for(int i = 0; i < n; i++){
            maxdis = max(maxdis, x[i]+t[i]);
            mindis = min(mindis, x[i]-t[i]);
        }
        cout<< (maxdis+mindis)/2.0 << endl;
    }
    return 0;
}