#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a , b ;
    int n ,x[1005] , y[1005] , ans=0 ;
 
    cin >> n >> a >> b ;
 
    for ( int i=0 ; i<n ; ++i )
    {
        x[i]= a[i] - 48;
        y[i]= b[i] - 48;
    }
 
    for (int i=0 ; i<n ; ++i)
    {
        int k1 = max ( x[i] , y[i]);
        int k2 = min ( x[i] , y[i]);
 
        ans += min ( k1 - k2 , 10-k1+k2  ) ;
 
    }
 
    cout << ans << endl;
}