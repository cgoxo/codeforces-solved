#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int n;
    cin >> n;
    set<ll int> s;
    ll int sum = 0, ans = 0;
    for(ll int i = 0; i < n; i++){
        ll int x;
        cin >> x;
        sum += x;
        //if prefix sum is zero
        if(sum == 0){
            ans++;
            sum = x;
            s.clear();
        }
        else if(s.find(sum) != s.end()){
            ans++;
            sum = x;
            s.clear();
        }
        s.insert(sum);
    }
    cout << ans << endl;
    return 0;
}