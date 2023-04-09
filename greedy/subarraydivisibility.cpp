#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n;
    cin >> n;
    ll int a[n];
    for(ll int i = 0; i < n; i++) cin >> a[i];
    ll int ans = 0, sum = 0;
    map<ll int, ll int> freq;
    freq[0] = 1;
    for(ll int i = 0; i < n; i++){
        sum += a[i] + 1e10 * n;
        sum %= n; 
        ans += freq[sum];
        freq[sum]++;
    }
    cout << ans << endl;

    return 0;
}