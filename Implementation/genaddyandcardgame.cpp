#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, x;
    cin >> s;
    // cout << s[0] << "    " << s[1];
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (s[0] == x[0] || s[1] == x[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}