#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'u' || s[i] == 'U' || s[i] == 'i' || s[i] == 'I')
            continue;
        else
        {
            // char c = ;
            cout << "." << (char)tolower(s[i]);
        }
    }
    return 0;
}