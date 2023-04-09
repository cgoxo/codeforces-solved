#include <bits/stdc++.h>

using namespace std;

int main()
{
    // its better to use string than numbers due to digit extraction
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((!i) && (s[i] == '9'))
            continue;
        if (s[i] <= '4')
            continue;
        s[i] = ('9' - s[i]) + '0';
    }
    // note '0' due to ascii representation easier to access digits.
    // if !i seems good exclude virgin condition;
    cout << s;
    return 0;
}