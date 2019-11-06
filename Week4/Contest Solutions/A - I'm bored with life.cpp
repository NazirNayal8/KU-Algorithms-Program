#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){

    int a , b ; 
    cin >> a >> b;
 
    int ans = 1;
    int q = min(a,b);
 
    for(int i=2 ; i<=q ; ++i){
        ans *= i ;
    }
 
    cout << ans << endl ;
}