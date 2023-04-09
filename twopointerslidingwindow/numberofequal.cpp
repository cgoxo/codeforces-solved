#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll int n, m;
    cin >> n >> m;
    ll int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    ll int cnt = 0, i = 0, j = 0;
    
    while(i < n && j < m){
        //ai = bj
        if(a[i] == b[j]){
            //run count then cnt += c1*c2
            ll int c1 = 0, c2 = 0, target = a[i];
            while(i < n && a[i] == target)
                i++, c1++;
            while(j < m && b[j] == target)
                j++, c2++;
            // cout << "c1->" << c1 << endl << "c2->" << c2 << endl;
            cnt += (c1*c2);
        }
        else if(a[i] > b[j]) j++;
        else i++;
    }
    cout<<cnt<<endl;
    return 0;
}