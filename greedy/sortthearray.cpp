#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    int arr[n], temp[n], idx;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        temp[i] = arr[i];
    }
    // int count = 0;
    sort(temp, temp+n);
    int ptr1 = -1, ptr2;
    for(int i = 0; i < n; i++){
        if(temp[i] != arr[i]){
            if(ptr1 == -1)
                ptr1 = i;
            ptr2 = i;
        }
    }
    if(ptr1 != -1){
        //not sorted
        reverse(arr + ptr1, arr + ptr2 + 1);
    }
    else
        ptr1 = ptr2 = 0;
    if(is_sorted(arr, arr+n))
        cout << "yes\n" << ptr1 + 1 << " " << ptr2 +1 << "\n";
    else    
        cout << "no\n";

    return 0;
}