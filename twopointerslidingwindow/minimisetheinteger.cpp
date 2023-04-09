#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    // to int
    
    // cout<<"Sahi soch ra hai \n";
    
    //idhar se
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        vector<int> even, odd;
        for(int i = 0; i < n; i++){
            if((s[i] - '0') % 2 == 0)
                even.push_back(s[i] - '0');
            else
                odd.push_back(s[i] - '0');
        }
        int p1 = 0, p2 = 0;
        while(p1 < even.size() && p2 < odd.size()){
            if(even[p1] < odd[p2]){
                cout<<even[p1];
                p1++;
            }
            else{
                cout<<odd[p2];
                p2++;
            }
        }
        while(p1 < even.size()) cout << even[p1++]; 
        while(p2 < odd.size()) cout << odd[p2++]; 
        cout << endl;
    }

    return 0;
}