#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int a , b , n , x = 0;
 
    cin >> a >> b >> n ;
 
    while ( n>0) {
 
        if ( x%2==0) {
 
            n-= __gcd(a,n);
            x++ ;
        }
 
        else if (x%2!=0) {
 
            n-= __gcd(b , n);
 
            x++;
        }
 
 
    }
 
    if ( x%2==0) cout << 1 << endl ;
    else cout << 0 << endl ;
 
 
}