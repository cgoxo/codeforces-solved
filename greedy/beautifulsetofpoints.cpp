#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> x >> y;
    int max = min(x, y) + 1;
    cout << max << endl;
    for(int i = 0; i < max; i++){
        cout << i << " " << max - i - 1 << endl;
    }

    return 0;
}