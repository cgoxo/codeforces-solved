#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            break;
        }
        for(int i = 0; i < n; i++){
            if(a[i] < a[i+1]){
                break;
            }
            else{
                
            }
        }
    }
    return 0;
}