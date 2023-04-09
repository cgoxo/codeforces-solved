#include<bits/stdc++.h>
 
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(c) (c).begin(),(c).end()
#define mp make_pair
#define pb push_back
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define dbg(x) cerr<<__LINE__<<": "<<#x<<" = "<<(x)<<endl
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf = (int)1e9;
const double INF = 1e12, EPS = 1e-9;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
        cout << "Working nicest";
    return 0;
}



//Insert in vector:
for (auto &it : a) cin >> it;

// Gareeb Template
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    return 0;
}

// ---------------x----------------------
// Chutput:
inline int mul(int a, int b)
{
    return (long long)a * b % md;
}

int pw(int a, int b)
{
    int x = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            x = mul(x, a);
        }
        a = mul(a, a);
        b >>= 1;
    }
    return x;
}

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}

bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
