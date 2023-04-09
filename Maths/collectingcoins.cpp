#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        long long int a, b, c, n;
        cin>>a>>b>>c>>n;
        int maxc = max(a, max(b,c));
        long long int ans;
        ans = a+b+c+n;
        if(ans%3) cout<<"NO"<<endl;
        else{
            if(a <= ans/3 && b <= ans/3 && c <= ans/3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}