#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int onesdigit = x % 10;
        // count number of digits
        int count = 0, temp = x;
        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }
        // cout << onesdigit << "  " << count << endl;
        // for before ones digit.. like 8-> before 7,6,5,4..
        int sum = 0;
        for (int i = 1; i < onesdigit; i++)
        {
            sum += 10;
        }
        for (int i = 1; i <= count; i++)
        {
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}