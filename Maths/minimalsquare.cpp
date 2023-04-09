#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a<b) a*=2;
        else    b*=2;
        cout<<max(a,b) *max(a,b)<<endl;
    }
    return 0;
}