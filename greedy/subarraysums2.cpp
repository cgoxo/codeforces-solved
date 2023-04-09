#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, k;
    cin >> n >> k;
    ll int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll int,ll int> freq;
    ll int sum = 0, ans = 0;
    freq[0] = 1;
    for(ll int i = 0; i < n; i++){
        sum += a[i];
        ans += freq[sum - k];
        freq[sum]++;
    }
    cout << ans << endl;
    return 0;
}