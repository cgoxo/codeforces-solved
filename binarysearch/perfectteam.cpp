#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int q; 
    cin >> q;
    while(q--){
        ll int c, m, x;
        cin >> c >> m >> x;
        int low = 0, high = min(c,m), ans;
        while(low <= high){
            int mid = (low + high) >> 1;
            if( c + m + x - 2*mid >= mid){
                low = mid + 1;
                ans = mid;
            }
            else
                high = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}