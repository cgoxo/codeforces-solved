#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    // freeq map if equal to k makes it possible
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    // traverse a map with iterator
    string res;
    for (auto x = m.begin(); x != m.end(); x++)
    {
        // cout << x->first << "  " << x->second << endl;
        if (x->second % k)
        {
            cout << -1;
            return 0;
        }
        res += string(x->second / k, x->first);
    }
    for (int i = 0; i < k; i++)
        cout << res;
    cout << endl;
    return 0;
}
