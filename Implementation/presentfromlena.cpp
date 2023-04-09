#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = -n; row <= n; row++)
    {
        // print spaces
        int spaces = 2 * abs(row);
        for (int i = 0; i < spaces; i++)
            cout << " ";
        // numbers 1 for increasing 1 for decreasing
        int max = n - abs(row);
        for (int i = 0; i < max; i++)
            cout << i << " ";
        for (int i = max; i > 0; i--)
            cout << i << " ";
        cout << 0 << endl;
    }

    return 0;
}