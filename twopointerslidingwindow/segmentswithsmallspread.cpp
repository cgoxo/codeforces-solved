#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, k; 
    cin >> n >> k;
    ll int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll int ans = 0;

    multiset<ll int> ms;
    ms.insert(a[0]);
    ll int i = 0, j = 0;
    while(j < n){
        ll int currmax =  *ms.rbegin(); //what is the value "*"
        ll int currmin = *ms.begin();

        if(currmax - currmin <= k){
            ans += j-i + 1;
            j++;
            
            if(j < n)
                ms.insert(a[j]);
        }
        else{
            ms.erase(ms.find(a[i])); //remove once
            i++;
        }

    }
    cout << ans << endl;
    return 0;
}