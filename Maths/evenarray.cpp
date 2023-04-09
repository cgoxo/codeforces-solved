#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        int n, e = 0, o = 0; 
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(i%2 != x%2){
                if(i%2)
                    o++;
                else
                    e++;
            }
        }
        cout<<(o == e? o: -1)<<endl;
    }
    return 0;
}