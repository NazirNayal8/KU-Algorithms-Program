#include <bits/stdc++.h>
using namespace std ;
const int INF = 1e5 + 7 ;
int a[INF];
int main()
{
    int n , k ; cin >> n >> k;
 
    for(int i=1 ; i<=n ; ++i)
        cin >> a[i];
    int q = a[k];
    for(int i=k+1 ; i<=n ; ++i)
    {
        if(a[i]!=q)
        {
            printf("-1\n");
            return 0 ;
        }
    }
    int p=0;
    for(int i=k-1 ; i>0 ; --i)
    {
        if(a[i]==q)p++;
        if(a[i]!=q)break;
    }
    printf("%d\n",k-p-1);
    return 0 ;
}