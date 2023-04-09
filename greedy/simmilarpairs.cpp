#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, a = 0, b = 0, flag = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 == 0) a++;
            else b++;
        }
        //a even || b odd
        if(a%2 != b%2)
            cout << "NO\n";
        else{
            if(a%2 == 0) cout << "YES\n";
            else{
                for(int i = 0; i < n; i++){
                    for(int j = i + 1; j < n; j++){
                        if(v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1){
                            if(flag == 0){
                                cout << "YES\n";
                                flag = 1;
                            }
                        }
                    }
                }
                if(flag == 0)
                    cout << "NO\n";
            }
        }
    }

    return 0;
}
