#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    char c;
    cin >> h1 >> c >> m1 >> h2 >> c >> m2;
    int h, m;
    m1 += h1 * 60;
    m2 += h2 * 60;
    m = (m1 + m2) / 2;
    h = m / 60;
    m = m % 60;
    // cout << h << ":" << m << endl;
    cout << (h < 10 ? "0" : "") << h << ':' << (m < 10 ? "0" : "") << m << endl;

    return 0;
}