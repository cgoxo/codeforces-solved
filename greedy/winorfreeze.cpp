#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   

    ll int n;
    cin >> n;
    vector<ll int> prime;
    // store(prime, n);
    // for(int i = 0; i < prime.size(); i++) cout << prime[i] << " ";
    ll int temp = n;
    for(ll int i = 2; i * i <= temp; i++){
        if(temp % i == 0){
            while(temp % i == 0){
                prime.push_back(i);
                temp /= i;
            }
        }
    }
    if(temp!=1) prime.push_back(temp);
    ll int sz = prime.size();
    if(sz <= 1) cout<<"1\n0\n";
    else if(sz > 2) cout<<"1\n"<<prime[0]*prime[1]<<"\n";
    else cout<<"2\n";
    return 0;
}