#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        if(2*l <= r)
            cout<<l<<" "<<2*l;
        else
            cout<<-1<<" "<<-1;
        cout<<endl;
    }
    return 0;
}