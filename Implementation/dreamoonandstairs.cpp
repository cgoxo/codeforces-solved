#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int result = 0;
    if (m > n)
    {
        result = -1;
    }
    else
    {
        // odd
        if (n % 2)
            result = n / 2 + 1;
        else
            result = n / 2;
        // check divisibility for m
        while (result % m > 0)
            result++;
    }
    cout << result;
    return 0;
}