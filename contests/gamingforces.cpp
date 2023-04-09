#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll int n, x;
        cin >> n;
        ll int ans = 0, count1 = 0;
        for(ll int i = 0; i < n; i++){
            cin >> x;
            if(x == 1) count1++;
            else ans++;
        }
        ll ans1 = count1/2 + count1%2;       
        cout << ans + ans1 << endl;
    }
    return 0;
}