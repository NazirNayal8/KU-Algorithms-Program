#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , c , a[100005] , ans=1 ;
 
    cin >> n >> c ;
 
    cin >>a[0] ;
    for (int i=1 ; i<n ; i++)
    {
        cin >> a[i] ;
 
        if (a[i]-a[i-1] <= c) ans++;
 
        else if (a[i]-a[i-1] > c) ans=1 ;
    }
 
    cout <<  ans << endl ;
}