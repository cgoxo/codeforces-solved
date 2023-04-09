#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long

int32_t main()
{
    int n, s;
    cin >> n >> s;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = a[0], cnt = 0, i = 0, j = 0;
    while(j < n){

        // if(i>j){
        //     j = i;
        //     sum = a[i];
        //     continue;
        // }


        if(sum > s){
            //number of subarrays will be from i to j-1
            // we will count all the subarrays that are starting at i, since we will do i++ next;
            //count operation
            cnt += (j-i);
            sum -= a[i];
            i++;
        }
        else{
            //progress j and add up to sum
            if(j+1 != n)
            {
                j++;
                sum += a[j];
            }else{
                //[i-j], [i+1-j], [i+2-j], [n-1 - n-1]
                cnt += ((j-i+1)*(j-i+2))/2;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}