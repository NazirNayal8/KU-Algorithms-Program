#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m , k , a[1005]  , ans=0;
 
    cin >> n >> m >> k ;
 
 
    for (int i=0 ; i<m ; i++)
        cin >> a[i];
 
    int x ;
 
    cin >> x ;
 
    for (int i=0 ; i<m ; ++i)
    {
        if (__builtin_popcount( x^a[i] ) <= k )
            ans++ ;
    }
 
    cout <<  ans << endl ;
 
}