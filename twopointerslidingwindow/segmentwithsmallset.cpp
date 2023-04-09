#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, k , ans = 0;
    cin >> n >> k;
    ll int a[n];
    for(ll int i = 0; i < n; i++) cin >> a[i];
    //todo: if k == 0
    if(k == 0){
        cout << 0 << endl; 
        return 0;
    }
    map<ll int,ll int> freq;
    freq[a[0]] = 1;
    ll int i = 0, j = 0;

    while(j < n){
        if(freq.size() <= k){
            ans += (j-i+1);
            j++;

            if(j < n)
                freq[a[j]]++;
        }
        else{
            freq[a[i]]--;
            if(freq[a[i]] == 0)
                freq.erase(a[i]);
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
