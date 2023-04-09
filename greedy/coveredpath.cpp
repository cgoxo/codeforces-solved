#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int v1, v2, t, d;
    cin >> v1 >> v2 >> t >> d;
    ll int ans = 0;
    ll int max1 = v1;
    ll int max2 = v2 + (t-1)*d;
    for(int i = 0; i < t; i++){
        ans += min(max1, max2); 
        max1+=d;
        max2-=d;
    }
    cout << ans << endl;
    return 0;
}