#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int d[n], flag = 1;
        for(int i = 0; i < n; i++)
            cin>>d[i];
        int a[n];
        a[0] = d[0];
        for(int i = 1; i < n; i++){
            if(abs(d[i-1] + d[i]) != abs(d[i-1] - d[i])){
                flag = 0;
                break;
            }
            else
                a[i] = a[i-1] + d[i];
        }
        if(flag)
        {
            for(int i = 0; i < n; i++)
                cout<<a[i] <<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}