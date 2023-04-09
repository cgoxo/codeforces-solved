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
        int n, a, b;
        cin >> n >> a >> b;
        // string s;
        // // s = 'a';
        for(int i = 0; i < n; i++){
            cout << (char)('a' + i%b);
        }
        cout << endl;
        
    }

    return 0;
}