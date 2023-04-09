#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int mid, vector<int> &a, vector<int> &b){
    int lower = 0, upper = mid - 1;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= upper && b[i] >= lower){
            cnt++;
            lower++;
            upper--;
        }
        if(cnt == mid)
            return true;
    }
    return false;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
        }
        int l = 1, r = n;
        int ans = 0;
        while(l <= r){
            int mid = (l+r)/2;
            if(check(mid, a, b)){
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}