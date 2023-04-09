#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first)
        return a.first < b.first;
    else
        return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> >v(n);
    map<pair<int, int>, int> mp; //keep track of index
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second; 
        mp[v[i]] = i; // storing index
    }
    //sort on basis of first value
    //if first value is same sort in OPPOSITE order of second value 
    // (Why?)-> To initialise first value to zero since it wont have any comparison
    sort(v.begin(), v.end(), cmp);
    //ans1: who is inside [easy to track from last] suffix max
    //ans2: inside under [track from first] prefix max
    vector<int> ans1(n, 0);
    vector<int> ans2(n, 0);

    int m = v[n-1].second;
    for(int i = n-2; i >= 0; i--){
        if(v[i].second >= m)
            ans1[mp[v[i]]] = 1;// fill that idx
        else
            m = v[i].second;
    }
    m = v[0].second;
    for(int i = 1; i < n; i++){
        if(v[i].second <= m)
            ans2[mp[v[i]]] = 1;
        else
            m = v[i].second;
    }
    for(auto x: ans1) cout << x << " ";
    cout << endl;
    for(auto x: ans2) cout << x << " ";
    cout << endl;
    
    return 0;
}