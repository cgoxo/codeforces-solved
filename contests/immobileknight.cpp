#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int flag = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if((i-2 > 0 && j-1 >= 1) || (i -1 > 0 && j-2 >=1))
                    continue;
                else if((i-2 >= 1 && j+1 <= m) || (i -1 >= 1 && j+2 <= m))
                    continue;
                else if((i+1 <= n && j-2 >= 1) || (i+2 <= n && j-1 >= 1))
                    continue;
                else if((i+1 <= n && j+2 <= m) || (i+2 <= n && j+1 <= m))
                    continue;
                else{
                    cout<<i<<" "<<j<<endl;
                    flag = 1;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag)
            cout<<n<<" "<<m<<endl;
    }
    return 0;
}