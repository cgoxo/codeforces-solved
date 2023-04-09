#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = -1;
        int b = -1;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (a == -1)
                    a = i;
                b = i;
            }
        }
        int cnt = 0;
        if (a != -1)
        {
            for (int i = a; i <= b; i++)
                cnt += s[i] == '0';
        }
        cout << cnt << endl;
    }
    return 0;
}