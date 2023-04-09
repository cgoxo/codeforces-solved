#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        int flag = 0;
        //count no of pairs exist
        int p1 = 0, p2 = 0;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]) p1++;
        }
        for(int i = 1; i < m; i++){
            if(t[i] == t[i-1]) p2++;
        }

        if(s[n-1] == t[m-1]){
            //if common pair > 1
            if(p1 + p2 < 1) flag = 1;
            else flag = 0;
        }
        else{
            if(p1 + p2 <= 1) flag = 1;
            else flag = 0;      
        }
        cout << (flag? "YES":"NO");
        cout << endl;
    }
    return 0;
}