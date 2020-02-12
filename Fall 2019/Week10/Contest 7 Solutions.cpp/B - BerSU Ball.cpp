#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , m , a[107] , b[107] , ans=0  ;
 
    vector<bool> visa(107 , false) ;
    vector<bool> visb(107 , false) ;
 
    cin >> n ;
 
    for(int i=0 ; i<n ; ++i)
        cin >> a[i];
 
    cin >> m ;
 
    for(int i=0 ; i<m ; ++i )
        cin >> b[i] ;
 
    sort(a,a+n) ;
    sort(b,b+m) ;
 
    for (int i=0 ; i<n ; ++i)
    {
        for(int j=0 ; j<m ; ++j)
        {
            if (visb[j]==false && visa[i] ==false )
            {
                if (abs(b[j]-a[i]) <=1)
                {
                    ans++ ;
                    visb[j] = true ;
                    visa[i] = true ;
 
 
                }
 
            }
 
 
        }
 
    }
 
 
 
    cout << ans <<  endl ;
}