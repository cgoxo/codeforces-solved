#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool f(ll int x, ll int w, ll int h, ll int n){

    ll int num = (x/w) * (x/h);
    return num >= n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int w, h, n;
    cin >> w >> h >> n;
    ll int low = 0, high = 1;
    while(!f(high, w, h, n)) high *= 2;
    ll int ans = INT_MAX;
    while(low + 1 < high){
        ll int mid = (low+high)/2;
        if(f(mid, w, h, n)){
            // ans = mid;
            high = mid;
        }
        else{
            low = mid ;
        }
    }
    cout << high;
    return 0;
}