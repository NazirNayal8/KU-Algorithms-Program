#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x , y , s ;
 
    cin >> x >> y >> s ;
 
    int sum = abs(x)+ abs(y) ;
 
    if (s < sum ) cout << "NO" <<  endl ;
 
    else if (sum==s) cout << "YES" <<  endl ;
 
    else
    {
      int dif= s - sum ;
 
      if (dif%2==0) cout << "Yes" <<  endl ;
 
      else cout << "NO" <<  endl ;
 
 
    }
}