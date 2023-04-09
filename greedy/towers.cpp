#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > v(n);
    vector<pair<int, int> > ans;
    //instead of finding max min, sort
    for(int i = 0; i < n; i++){
         cin >> v[i].first;
         v[i].second = i;
    }
    // cout << maxi << mini;
    while(k--){
        sort(v.begin(), v.end());
        if(v[0].first == v[n-1].first) break;
        v[0].first++;
        v[n-1].first--;
        ans.push_back(make_pair(v[n-1].second, v[0].second));
    }

    //print ans;
    sort(v.begin(), v.end());
    cout << v[n-1].first - v[0].first << " " << ans.size() << endl;
    for(auto x: ans){
        cout<< x.first + 1 << " " << x.second + 1 << endl;
    }
    return 0;
}