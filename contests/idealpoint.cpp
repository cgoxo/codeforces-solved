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
        ll int n, k;
        cin >> n >> k;
        ll int flag = 0;
        // vector<pair<int, int> >v(n);
        int l, r;
        int left = 0, right = 0, center = 0;
        // int o1 = 0, o2 = 0;
        for(int i = 0; i < n; i++){
            cin >> l >> r;
            if(l == k && r == k) center++;
            else if(l == k) left++;
            else if(r == k) right++;
        }
        if(center > 0)
            cout << "YES";
        else if(left > 0 && right > 0)
            cout << "YES";
        else
            cout << "NO";
        cout<<endl;
    }

    return 0;
}