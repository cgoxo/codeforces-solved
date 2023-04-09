#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, l;
    cin >> n >> l;
    double arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    double max_dist = 0;
    for(int i = 1; i < n; i++){
        // dist = arr[i] - arr[i-1];
        max_dist = max(max_dist, (arr[i] - arr[i-1])/2.0);
    }
    // double dist_max = (double)max_dist/2.0;
    // double left_max = (double)arr[0];
    // double right_max = (double)l - (double)arr[n-1];

    max_dist = max(max_dist, arr[0]);
    max_dist = max(max_dist, l - arr[n-1]);

    cout << fixed << setprecision(9) << max_dist << endl;

    return 0;
}