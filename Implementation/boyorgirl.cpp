#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> distnct;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (distnct.find(s[i]) != distnct.end())
            continue;
        else
            distnct.insert(s[i]), cnt++;
    }
    // cout << cnt;
    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}