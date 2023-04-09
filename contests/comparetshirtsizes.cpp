#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int x1 = a.length() - 1, x2 = b.length() - 1;

        if(a == b)
        {
            cout<<"="<<endl;
        }
        else if(a[x1]> b[x2]) cout<<"<"<<endl;
        else if(a[x1] <b[x2])  cout<<">"<<endl;
        
        else if(a[x1] == 'S' && b[x2] == 'S'){
            if(x1 > x2) cout<< "<"<<endl;
            else cout<< ">"<<endl;
        }
        else if(a[x1] == 'L' && b[x2] == 'L'){
            if(x1 > x2) cout<< ">"<<endl;
            else cout<< "<"<<endl;  
        }
    }
    return 0;
}
