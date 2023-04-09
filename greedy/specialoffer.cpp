#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int p, d;
    cin >> p >> d;
    p++;
    ll int mod = 10, val = p - 1;
    while(mod <= p){
        ll int temp = p%mod;
        if(temp <= d)
            val = p - (temp) - 1;
        // else
        //     break;
        mod *= 10;
    }
    cout << val << endl;
    return 0;
}