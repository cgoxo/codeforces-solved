#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x, y, z;
    cin>> x >> y >> z;
    
    long long int k = (x+y)/z;

    if(k == (x/z + y/z)) cout<<k<<" "<<0<<endl;
    else{
        long long int a = x%z;
        a = z - a;
        long long int b = y%z;
        b = z - b;
        cout<<k<<" "<<min(a,b)<<endl;
    }


    return 0;
}