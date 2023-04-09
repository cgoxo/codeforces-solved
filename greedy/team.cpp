#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m; // n->0 || m->1
    if(m > 2*n + 2) cout << -1; // handles for extra 1
    else if(n > m+1) cout << -1; // handles for extra 0
    else{
        //check if occurance of zero is more print it first
        if(n > m){
            cout << "0";
            n--;
        }
        while(n > 0 && m > 0){
            if(m > n){
                cout << "110";
                m-=2;
                n--;
            }
            else{
                cout << "10";
                m--;
                n--;
            }
        }
        //todo extra case
        while(m--){
            cout<<"1";
        }
        cout << endl;
    }

    return 0;
}