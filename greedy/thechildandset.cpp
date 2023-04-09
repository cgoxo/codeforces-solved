#include <bits/stdc++.h>
using namespace std;

#define ll long long

int lob(int x){
    int i = 0;
    while(true){
        if( x & (1<<i) ){
            return (1<<i);
        }
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum, limit;
    cin >> sum >> limit;
    vector<pair<int, int> > v;
    for(int i = 1; i <= limit; i++){
        v.push_back(make_pair(lob(i), i));
    }
    sort(v.rbegin(), v.rend());
    
    vector<int> ans;

    for(auto x: v){
        if(sum >= x.first){
            sum -= x.first;
            ans.push_back(x.second);
        }
    }
    if(sum > 0){
        cout << -1;
        return 0;
    }
    cout<< ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}