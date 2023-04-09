#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, s; 
    cin >> n >> s;
    ll int a[n];
    for(ll int i = 0; i < n; i++) cin >> a[i];

    ll int ans = 0, sum = a[0];
    ll int sa = 0, ed = 0;

    while(sa < n){
        while((ed+1 < n) && (sum + a[ed + 1] <= s)){
            ed++;
            sum += a[ed];
        }
        if(sum > s){
            sum -= a[sa];
            sa++;
            if(ed < sa){
                ed = sa;
                sum = a[sa];
            }
            continue;
        }
        ans += ((ed-sa+1)*(ed-sa+2))/2;
        sum -= a[sa];
        sa++;
    }


    cout << ans << endl;
    return 0;
}
