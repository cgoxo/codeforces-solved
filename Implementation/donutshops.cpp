#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a < c)
            cout << "1 ";
        else
            cout << "-1 ";
        if (c < a * b)
            cout << b << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}