#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;
        if(x == y && y ==z)
            cout<<"YES"<< endl << x <<" "<< y <<" "<<z;
        else if(x == y && x > z)
            cout<< "YES"<< endl << x <<" "<< x <<" "<<y;
        else if(x == z && x > y)
            cout<< "YES"<< endl << x <<" "<< x <<" "<<z;
        else if(y == z && y > x)
            cout<< "YES"<< endl << y <<" "<< y <<" "<<x;
        else
            cout<< "NO";
        cout<<endl; 
    }
    return 0;
}