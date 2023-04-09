#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //given arrival and leaving time
    //find max no of customer at any time

    int n;
    cin >> n;
    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    sort(v.begin(), v.end());
    int ans = 1, count = 0;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        while((!s.empty()) && (v[i].first > *s.begin())){
            s.erase(s.begin());
        }
        s.insert(v[i].second);
        count = s.size();
        ans = max(count, ans);
    }
    cout << ans << endl;

    return 0;
}