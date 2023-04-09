#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int mid, int k, int n, int a[], int b[]){
    int target = 0;
    for(int i = 0; i < n; i++){
        int curr = mid * a[i];
        target += max(0, curr - b[i]);
        if(target > k)
            break;
    }
    return target <= k;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n],b[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < n; i++) cin>>b[i];
    
    int low = 0, high = 10000;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(check(mid, k, n, a, b)){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << high << endl;
    return 0;
}