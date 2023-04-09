#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, el;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (el >= x)
            cnt = 0;
        cnt++;
        el = x;
        ans = max(cnt, ans);
    }
    cout << ans << endl;
    return 0;
}