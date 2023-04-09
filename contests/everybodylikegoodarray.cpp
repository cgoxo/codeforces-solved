// Gareeb Template
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            a[i] %= 2;
        }
        int flag, count = 0;
        flag = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] != flag){
                flag = a[i];
            }
            else{
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}