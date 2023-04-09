#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;
int gcd(ll int a, ll int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
// int countDigit(long long n)
// {
//     return floor(log10(n) + 1);
// }

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin>>t;
    while (t--)
    {
        // int x = gcd(25, 10);
        // cout << x;
        ll int n;
        cin >> n;
        // store all pairs
        ll int total = 0;
        {
            for (ll int i = 1; i <= n; i++)
            {
                for (ll int j = i; j <= n; j++)
                {
                    if ((ll)((i * j) / pow(gcd(i, j), 2)) <= 3)
                        total = i == j ? total + 1 : total + 2;
                }
            }
        }

        cout << total;
    }
}