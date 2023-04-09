#include <bits/stdc++.h>
using namespace std;

#define ll long long
// bool check(ll mid, ll n, ll a[], ll h){
//     ll count = 0, mini = INT_MAX;
//     for(int i = 0; i < n - 1; i++){
//         ll curr=mid;
//            if(i<n-1){
//                ll d=a[i+1]-a[i];
//                if(d<mid) curr=d;
//            }
//            count+=curr;
//     }
//     return count >= h;
// }
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        ll l = 1, r = h;
        ll k = h;
        while(l <= r){
            ll mid = (l+r)/2;
            ll attack = 0;
            for(int i = 0; i < n; i++){
                ll curr = mid;
                if(i < n-1){
                    ll d = a[i+1] - a[i];
                    if(d < mid) curr = d;
                }
                attack += curr;
            }
            if(attack >= h)
                k = mid, r = mid - 1;
            else
                l = mid + 1;
        }
        cout << k << endl; 
    }
    return 0;
}