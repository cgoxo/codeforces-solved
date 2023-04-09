#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    long double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long double l = 0.0000, r = 1e7, e = 0.00000001, cnt1 = 0;
    while (l + e < r)
    {
        cnt1++;
        long double mid = (l + r) / 2.00;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] / mid;
            cnt += x;
        }
        if (cnt >= k)
            l = mid;
        else
            r = mid;
    }
    cout << fixed << setprecision(18) << l << endl;
}