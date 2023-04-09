// given string with a freequency array
// to find min sum if remove distinct element freequency
// if multiple given remove with largest one freeq.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int arr[n];
    cin >> n >> s;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[s[i]] = max(m[s[i]], arr[i]);
    }
    // for (auto x : m)
    //     cout << x.first << " " << x.second << endl;
    return 0;
}