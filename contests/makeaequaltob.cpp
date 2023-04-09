#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int asum = 0, bsum = 0;
        int a[n], b[n];
        int countorder = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            asum+=a[i];
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
            bsum+=b[i];
        }
        int ans = abs(asum - bsum);
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]) countorder++;
        }
        if(ans == countorder)
            cout<<ans<<endl;
        else
            cout<<ans+1<<endl;
        
    }
    return 0;
}