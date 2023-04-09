#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    while(n % 2 == 0){
        bool check = true;
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < m; j++){
                check = check && (a[i][j] == a[n - i -1][j]);
            }
        }

        if(check)
            n/=2;
        else break;
    }
    cout<<n << endl;
    return 0;
}