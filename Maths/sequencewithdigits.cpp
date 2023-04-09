#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        ll int a, k;
        cin >> a >> k;
        while(k-- && k >= 1){
            ll int m1 = INT_MAX, m2 = INT_MIN; // min and max digit
            ll int temp = a;
            while(temp > 0){
                m1 = min(m1, temp%10);
                m2 = max(m2, temp%10);
                temp/=10;
            }
            if(m1*m2 == 0) break;
            a += (m1*m2);
        }
        cout<<a<<endl;
    }
    return 0;
}