#include <bits/stdc++.h>
 
using namespace std;
 
bool distinct (string h ) {
 
    sort ( h.begin() , h.end()) ;
    for ( int i = 1 ; i< 4 ; i++) {
 
        if ( h[i] == h[i-1]) {
 
            return false ;
        }
    }
        return true ;
 
}
 
int main()
{
    string a ;
    cin >> a ;
 
    while (true) {
 
 
            if (a[3]=='9') {
            a[3]= '0' ;
            a[2]++ ;
            }
            else a[3]++ ;
 
            if ( a[2]==':') {
                a[2] = '0' ;
                a[1]++ ;
            }
 
            if ( a[1]==':') {
 
                a[1]='0' ;
                a[0]++ ;
            }
 
 
 
        if (distinct(a)) {
 
        cout << a ;
        break ;
        }
 
 
    }
 
 
}