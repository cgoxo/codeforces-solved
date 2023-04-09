#include <bits/stdc++.h>

using namespace std;

int main()
{
    // any order
    vector<int> x(4);
    for(int i = 0; i < 4; i++){
        cin>> x[i];
    }
    sort(x.begin(), x.end());
    for(int i = 0; i < 3; i++){
        cout<<x[3] - x[i] << " "; 
    }
    cout<<endl;
    return 0;
}