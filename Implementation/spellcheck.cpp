#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;

int main()
{
    int t;
    cin >> t;
    string p = "Timur";
    sort(p.begin(), p.end());
    while (t--)
    {
        int n;
        
        string q;
        cin >> n >> q;
        sort(q.begin(), q.end());
        if (p == q)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}