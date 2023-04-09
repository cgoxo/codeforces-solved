#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // operation
    int sum = a[n - 1], current = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        current = min(current - 1, a[i]);
        current = max(0, current);
        sum += current;
    }
    cout << sum;
    return 0;
}