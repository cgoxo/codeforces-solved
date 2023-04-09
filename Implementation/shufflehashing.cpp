#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string h, p, n;
        cin >> p >> h;
        sort(p.begin(), p.end());
        bool flag = 0;
        for (int i = 0; i + p.size() <= h.size(); i++)
        {
            n = h.substr(i, p.size());
            sort(n.begin(), n.end());
            if (p == n)
                flag = 1;
        }
        cout << (flag ? "YES" : "NO");
        cout << endl;
    }
    return 0;
}