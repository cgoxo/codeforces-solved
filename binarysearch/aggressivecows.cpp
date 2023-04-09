#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool canplace(int dist, int arr[], int n, int c){
    int currpos = arr[0], count = 1;
    for(int i = 1; i < n; i++ ){
        if(arr[i] - currpos >=  dist){
            count++;
            currpos = arr[i];
        }
    }
    if(count >= c) return true;
    return false;
}
int main()
{
    int t = 1;
    // cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        int low = 1, high = arr[n] - arr[0], mid;
        while(low <= high){
            mid = (low + high) >> 1;
            if(canplace(mid, arr, n, c)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout << high << endl;

    }
    return 0;
}