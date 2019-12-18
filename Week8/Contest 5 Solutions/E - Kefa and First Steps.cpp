#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , x=1 , maxi=1 ;
    int a[100001] ;
 
    cin >> n ;
 
    for (int i=0 ; i < n ; i++) {
 
        cin >> a[i] ;
 
        if ( i > 0) {
 
            if ( a[i] >= a[i-1]) {
 
                x++ ;
 
                maxi = max ( x , maxi) ;
 
            }
 
            else  x =1 ;
 
        }
 
 
    }
 
    cout << maxi << endl ;
 
}