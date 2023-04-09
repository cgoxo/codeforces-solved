#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int x, n;
    cin >> x >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    multiset<int> pos, posDiff;
    pos.insert(0);
    pos.insert(x);
    // cout << *pos.rbegin();
    // for(auto it: pos) cout<<it;
    posDiff.insert(x);
    // cout << *posDiff.end() << " ";
    for(int i = 0; i < n; i++){
        // int lb, ub; 
        // lb = *pos.lower_bound(arr[i]);
        auto nex =  pos.upper_bound(arr[i]);
        auto pre = nex;
        pre--;
        // cout << ub;
        pos.insert(arr[i]);
        // cout<< ub - lb << endl;
        // lb = *ub--;
        posDiff.erase(posDiff.find(*nex - *pre));
        posDiff.insert(*nex - arr[i]);
        posDiff.insert(arr[i] - *pre);

        cout << *posDiff.rbegin() << " ";
    }
    cout << endl;
    return 0;
}