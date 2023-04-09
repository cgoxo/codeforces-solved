#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
                x = i, y = j;
        }
    }
    int ans = 0;
    ans = abs(x - 2) + abs(y - 2);
    cout << ans;
    return 0;
}