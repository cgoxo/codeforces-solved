#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    //store odd count
    //store even count
    int odd_count = 0, even_count = 0;
    for(auto it : mp){
        even_count += (it.second/2) * 2;
        odd_count += (it.second%2);
    }
    even_count += (odd_count+1)/2;

    cout<<even_count<<endl;
    
    return 0;
}