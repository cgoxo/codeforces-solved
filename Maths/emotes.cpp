#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, m, k;
    vector<int> arr(n);
    cin>>n >> m>>k;
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr.rbegin(), arr.rend());
    cout << m / (k + 1) * 1ll * (arr[0] * 1ll * k + arr[1]) + m % (k + 1) * 1ll * arr[0] << endl;
    return 0;
}