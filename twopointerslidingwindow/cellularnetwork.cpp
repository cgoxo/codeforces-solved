#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int p1 = 0, p2 = 0, ans = 0;
    while(p1 < n){
        //progress p2 such that its left tower is before city
        while((p2+1 < m) && (b[p2+1] < a[p1]))
            p2++;
        // diff of city p1 from left(currently p2)
        int req = abs(a[p1] - b[p2]);
        if(p2+1 < m){
            // diff from right and finding max
            req = min(req, abs(b[p2+1] - a[p1])); 
        }
        ans = max(req, ans);
        p1++;
    }
    cout << ans;
    return 0;
}
