#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    string ones = "", temp = "", ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')
            ones += s[i];
        else
            temp += s[i];
    }
    int flag = 0;
    for(int i = 0; i < temp.size(); i++){
        if(temp[i] == '2' && flag == 0){
            ans += ones;
            flag = 1;
        }
        ans += temp[i];
    }
    // edge case if all are ones then flag remains 0
    if(flag == 0) ans += ones;
    cout << ans << endl;
    return 0;
}