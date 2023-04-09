#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0, sum = 0;
    for (int i = 1;; i++)
    {
        sum += i;
        total += sum;
        if (n < total)
        {
            cout << i - 1;
            return 0;
        }
    }
    return 0;
}