#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int h[n], t, ans[m];
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        cin >> h[i];
        ms.insert(h[i]);    
    }
    for(int i = 0; i < m; i++){
        cin >> t;
        //if mty
        if(ms.empty()){
            ans[i] = -1;
            continue;
        }
        auto it = ms.upper_bound(t);
        //todo it == s.begin()
        if(it == ms.begin()){
            ans[i] = -1;
            continue;
        }
        it--;
        ans[i] = *it;
        ms.erase(it);
    }
    for(int i = 0; i < m; i++){
        cout<< ans[i] << "\n";
    }
    return 0;
}