#include <bits/stdc++.h>
 
using namespace std ;
 
int main()
{
    int n , a[105] , score=0  ;
 
    cin >> n;
 
    for (int i=0 ; i < n ; ++i)
    {
        cin >> a[i] ;
 
        if (a[i]==1)
        {
            a[i]=-1 ;
            score++ ;
        }
        else if( a[i]==0)    a[i] = 1 ;
 
    }
 
    int maxs , maxe ;
 
    maxs = 0;
    maxe = 0 ;
 
    for (int i=0 ; i<n ; ++i)
    {
        maxe+=a[i];
 
        if (maxs < maxe) maxs = maxe ;
 
        if (maxe < 0) maxe = 0 ;
 
    }
 
    if (maxs==0) maxs-- ;
 
    cout << maxs + score << endl ;
}