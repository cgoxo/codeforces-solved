#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        int total;
        for (int i = 0; i < 3; i++)
        {
            total = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 1)
                    total += 3;
                else if (mp[s[i][j]] == 2)
                    total += 1;
            }
            cout << total << " ";
        }
        cout << endl;
    }
    return 0;
}