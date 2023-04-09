#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<char> a1(n, '0'), b1(n, '0');
    int p = 0, q = 0;
    // case when k = 0 => Based on time
    for(int i = 0; i < n; i++){
        if(a[p] < b[q]){
            a1[p] = '1';
            p++;
        }
        else{
            b1[q] = '1';
            q++;
        }
    }

    //when k = n/2 => Based on individual time
    for(int i = 0; i < n/2; i++){
        a1[i] = '1';
        b1[i] = '1';
    }
    for(int i = 0; i < n; i++) cout << a1[i];
    cout<< endl;
    for(int i = 0; i < n; i++) cout << b1[i];
    return 0;
}