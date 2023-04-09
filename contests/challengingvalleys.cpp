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
        vector<int> b;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i == 0 || b.back() != x)
                b.push_back(x);
        }
        // for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
        int count = 0;
        for(int i = 0; i < b.size(); i++){
            if((i == 0 || b[i-1] > b[i]) && (i == b.size()-1 || b[i] < b[i+1]))
                count++;
        }
        cout<<((count == 1)?"YES":"NO")<<endl;
    }
    return 0;
}