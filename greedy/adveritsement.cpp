#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll int> previousSmaller(vector<ll int> &values){
    ll int n = values.size();
    vector<ll int> ps(n);
    stack <ll int> st;
    for(ll int i = 0; i < n; i++){

        while((!st.empty()) && (values[st.top()] >= values[i]))
            st.pop();
        ps[i] = (st.empty() ? -1 : st.top());
        st.push(i);
    }
    return ps;
}
vector<ll int> nextSmaller(vector<ll int> &values){
    ll int n = values.size();
    vector<ll int> ns(n);
    stack <ll int> st;
    for(ll int i = n-1; i >= 0; i--){
        while((!st.empty()) && (values[st.top()] >= values[i]))
            st.pop();
        ns[i] = (st.empty() ? n : st.top());
        st.push(i);
    }
    return ns;
}
int main()
{
    ll int n;
    cin >> n;
    vector<ll int> v(n);
    for(ll int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector <ll int> ps = previousSmaller(v);
    vector <ll int> ns = nextSmaller(v);
    ll int ans = 0;
    for(ll int i = 0; i < n; i++){
        ll int area = (ns[i] - ps[i] - 1) *v[i];
        ans = max(area, ans);
    }
    cout << ans << endl;
    return 0;
}