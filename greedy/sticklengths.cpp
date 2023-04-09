#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<ll int> a(n);
    
    ll int ans = 0, median = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    median = a[n/2];
    for(int i = 0; i < n; i++) ans += abs(a[i] - median);
    cout << ans << endl;     
    return 0;
}