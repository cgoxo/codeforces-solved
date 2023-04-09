#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin >> s;
        int sum = 0, z = 0, e = 0; 
        int n = s.length();
        for(int i = 0; i < n; i++){
            int x = (int)(s[i] - '0');
            if(x == 0) z++;
            if(x%2 == 0) e++;
            sum+= x;
        }
        sum%=3;

        if(sum == 0 && z > 0 && e > 1)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;

    }
    return 0;
}