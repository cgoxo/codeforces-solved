#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 << endl;
        int a = n, b = n - 1;
        // last and 2nd last
        for (int i = 1; i < n; i++)
        {
            cout << a << " " << b << endl;
            a = (a + b + 1) / 2, b--;
        }
    }
    return 0;
}