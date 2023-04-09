#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, d;
    cin >> n >> d;
    int a, b;
    cin >> a >> b;
    int x, y;
    vector<pair<int, int> >l; 
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        l.push_back(make_pair((a*x + b*y), i+1));
    }
    
    sort(l.begin(), l.end());
    vector<int> ans;
    for(int i = 0; i < l.size(); i++){
        if( l[i].first <= d){
            d -= l[i].first;
            ans.push_back(l[i].second);
        }
    }
    // cout << count << endl;   
    cout << ans.size() << endl;
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}