#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool istrue = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= 97)
            istrue = false;
    }
    if (istrue)
    {
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (s[i] >= 97)
                s[i] -= 32;
            else
                s[i] += 32;
        }
    }
    cout << s << endl;
    return 0;
}