#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int nb, ns, nc, pb, ps, pc;
    int r;

    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    int rb = 0, rs = 0, rc = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'B') rb++;
        if(s[i] == 'C') rc++;
        if(s[i] == 'S') rs++;
    }
    

    return 0;
}