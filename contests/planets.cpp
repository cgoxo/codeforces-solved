#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1; 
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        int a[n], x; //orbits
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin>>x;
            m[x]++;
        }
        int cost = 0;
        for(auto x: m){
            if(x.second < c)
                cost+=x.second;
            else    
                cost+=c;
        }
        cout<<cost<<endl;
    }
    return 0;
}