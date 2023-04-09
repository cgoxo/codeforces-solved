#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll int k; 
        cin >> k; 
        if(k == 1 && k == 0)
            cout << 1 << endl;
        else
            cout << k - 1 << endl;
    }
    return 0;
}
