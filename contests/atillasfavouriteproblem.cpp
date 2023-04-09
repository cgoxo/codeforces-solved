#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        // cout << s[0] - 'a'<<endl;
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, s[i] - 'a' + 1);
        }
        cout << maxi << endl;
    }
    return 0;
}