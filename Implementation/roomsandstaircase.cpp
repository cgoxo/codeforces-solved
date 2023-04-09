#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = n, len = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                len = max(i + 1, n - i);
                ans = max(ans, 2 * len);
            }
        }
        cout << ans << endl;
    }
    return 0;
}