#include <bits/stdc++.h>
#define LL long long
using namespace std;
 
 
int MSB(LL x){
    int ans = -1;
    for(int i=0 ; i<64 ; ++i)
        if((1ll << i) & x)
            ans = i;
    return ans;
}
 
LL solve(LL L,LL R){
    if(L == R)
        return L;
    int x = MSB(R);
    LL Num = (1ll << x);
    if(Num <= L)
        return solve(L - Num,R - Num) + Num;
    if((1ll << (x + 1)) - 1 <= R)
        return (1ll << (x + 1)) - 1;
    return Num - 1;
}
 
int main(){
    int n;
    cin >> n;
    while(n--){
        LL l,r;
        cin >> l >> r;
        cout << solve(l,r) << endl;
    }
}