#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    int ans = 0, temp = 0;
    while (n--)
    {
        cin >> a >> b;
        temp -= a;
        temp += b;
        ans = max(ans, temp);
    }
    cout << ans;
    return 0;
}