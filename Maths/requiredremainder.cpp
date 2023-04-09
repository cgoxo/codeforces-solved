#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t = 1;
    cin>>t;
    while(t--){
        int x, y, n, k, a;
        cin>>x>>y>>n;
        a = n % x;
        if(a >= y)
            n = n - (a-y);
        else
            n = n - a - x + y;
        cout<<n<<endl;
    }
    return 0;
}