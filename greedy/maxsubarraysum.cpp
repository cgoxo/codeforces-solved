#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n;
    cin >> n;
    ll int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll int sum = a[0], ans = a[0];
    for(int i = 1; i < n; i++){
        if(sum < 0) sum = 0;
        sum += a[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}