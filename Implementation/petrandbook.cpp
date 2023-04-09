
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    int sum = 0, i = 0;
    while (i < 7)
    {
        sum += arr[i];
        if (sum >= n)
        {
            cout << i + 1;
            return 0;
        }
        i++;
        if (n > sum && i == 7)
            i = 0;
    }
    return 0;
}
