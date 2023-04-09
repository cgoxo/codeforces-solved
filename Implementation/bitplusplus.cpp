#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string n;
    int x = 0;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == n[i + 1] && n[i] == '+')
                x++;
            else if (n[i] == n[i + 1] && n[i] == '-')
                x--;
        }
    }
    cout << x;
    return 0;
}