#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1; 
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        
        if(n <= 2){
            cout<< 1<< endl;
        }
        else{
            cout<< 2 + (n-3)/x << endl;
        }
    }
    return 0;
}