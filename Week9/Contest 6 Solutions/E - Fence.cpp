#include <bits/stdc++.h>
using namespace std;
const int inf = 150007;
int a[inf] , par[inf];
int main()
{
    int n,k,idx,mn=INT_MAX;cin >> n >> k ;
    par[0]=0;a[0]=0;
    for(int i=1 ; i<=n ; ++i)
    {
        cin >> a[i];
        par[i]=par[i-1]+a[i];
    }
 
    for(int i=k ; i<=n ; ++i)
    {
        if(par[i]-par[i-k] < mn)
        {
            mn=par[i]-par[i-k];
            idx=i-k+1;
        }
    }
    cout << idx << endl ;
 
}