#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll int t;
    cin >> t;
    while(t--){
        ll int x, y;
        cin >> x >> y;
        ll int n = 2*(x - y - 1) + 2;
        cout << n << "\n";
        // for(ll int i = x; i >= y; i--)
        //     cout << i << " ";
        // for(ll int i = y + 1; i < x; i++)
        //     cout << i << " ";
        // cout << endl;
        
        for(int i = 0; i < x; i++){
            cout << 0 << " " << 1 << " ";
        }
        for(int i = 0; i < -1 * y; i++){
            cout << 0 << " " << -1 << " ";
        }
        cout << endl;
    }

    return 0;
}