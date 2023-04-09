#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // cout << s << endl;
    int sum_space = s.length() / 2;
    // cout << sum_space << endl;
    int flag = s.length() - 1;
    for (int i = sum_space; i < s.length(); i++)
    {
        if (i == flag)
            cout << s[i];
        else
            cout << s[i] << "+";
    }
    cout << endl;

    return 0;
}