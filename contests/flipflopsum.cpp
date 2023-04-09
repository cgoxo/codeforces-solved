#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int sum = 0, flag = 0, idx;
        if(n <= 2){
            // cout << -1 * (arr[0] + arr[1]) <<"\n"; 
            sum = -1 *(arr[0] + arr[1]);
        }
        else{
            //track idx
            for(int i = 0; i < n; i++){
                if(arr[i] == arr[i+1] && flag == 0){
                    flag = 1, idx = i;
                } 
            }
            //show track loc
            // cout << idx << "Sahi jaa raha hai";
            for(int i = 0; i < n; i++){
                if(i == idx){
                    sum += 2;
                    i++;
                }
                else sum += arr[i];
            }   
        }
        cout << sum << "\n";
    }
    return 0;
}