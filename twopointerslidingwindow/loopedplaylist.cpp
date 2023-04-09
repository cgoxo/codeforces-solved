#include <bits/stdc++.h>
using namespace std;

#define ll long long
void f(){
    // store extra(i.e minimum count) + startirng index
    ll int n, p;
    cin >> n >> p;
    ll int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll int total = accumulate(a, a+n, 0);
    ll int min_count, index, sum;
    ll int temp = p/total;

    min_count = temp * n;
    p -= total * temp;

    ll int extra = 1e8;
    for(ll int i = 0; i < n; i++){
        ll int j = i;
        ll int curr = 0, count = 0;

        while(curr < p){
            count++;
            curr+= a[j];
            j = (j+1)%n;

        }
        if(count < extra){
            extra = count;
            index = i+1;
            
        }
    }
    min_count += extra;
    cout << index << " " << min_count;
}
void g(){
    ll int n, p;
    cin >> n >> p;
    ll int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    // METHOD 2
    // find minimum length of subarray such that the sum is at least p

    ll int total = accumulate(a, a+n, 0);
    ll int min_count, index;
    ll int temp = p/ total;
    min_count = temp * n;
    p -= total * temp;

    if(p == 0){
        cout << 1 << " "<< min_count;
        return;
    }
    ll int extra = 1e8;

    ll int ptr1 = 0, ptr2 = 0;
    ll int sum = 0;
    while(ptr2 < 2*n){
        sum += a[ptr2 % n];
        while(ptr1 <= ptr2 && sum >= p){
            if(ptr2 - ptr1+1 < extra){
                extra = ptr2 - ptr1 +1;
                index = ptr1 + 1;
            }
            sum -= a[ptr1 % n];
            ptr1++;
        }
        ptr2++; 
    }

    min_count += extra;
    cout << index << " " << min_count << endl;
}
int main()
{
    // f();
    g();

    return 0;
}
