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
        int flag = 1;
        for (int i = 0; i < n / 2; i++)
        {
            int j = n - 1 - i;
            // add 2 more case
            if (s[i] == s[j] || s[i] + 1 == s[j] - 1 || s[i] - 1 == s[j] + 1)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO");
        cout << endl;
    }
    return 0;
}