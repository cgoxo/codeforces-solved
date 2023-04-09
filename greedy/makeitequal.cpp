#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1000000;
int main()
{
    ll int n, k, x;
    cin >> n >> k;
    ll int cnt[N] = {0}, maxi = -1, mini = INT_MAX; 
    for(ll int i = 0; i < n; i++){
        cin >> x;
        cnt[x]++;
        maxi = max(maxi, x); // from where should we start
        mini = min(mini, x); // for how much length is our target
    }
    for(ll int i = maxi; i >= mini; i--){
        //go from top floor to bottom
        cnt[i] += cnt[i+1];
        // cout << cnt[i] << " ";
    }
    ll int count = 0, ans = 0;
    for(ll int i = maxi; i > mini; i--){
        if(count + cnt[i] > k){
            count = 0;
            ans++;
        }
        count += cnt[i];
    }
    if(count != 0) ans++; // for the mini row [check above loop]
    cout << ans << endl;

    return 0;
}