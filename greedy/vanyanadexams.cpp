#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool cmp(const pair<int, int> &v1, const pair<int, int> &v2){
    return (v1.second < v2.second);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, r, avg;
    cin >> n >> r >> avg;
    vector<pair<int, int> > v;
    int sum = avg * n, s = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        cin >> v[i].second;
        s += v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    if(s > sum){
        cout << -1;
    }
    else{
        
    }

    return 0;
}
