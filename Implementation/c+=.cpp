#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int64_t a, b, n;
        cin >> a >> b >> n;
        int cnt = 0;
        while (1)
        {
            if (a < b)
                swap(a, b);
            if (a > n)
                break;
            b += a;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}