#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    int i = 0, j = 0;
    while (i < n)
    {
        cout << s[i];
        j++;
        i += j;
    }
    return 0;
}