#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , x=0 , y ;
    scanf("%i", &n);
 
    for (int i = 1 ; n >= 0 ; i++ )
    {
        x+=i;
        n-=x;
        y = i ;
    }
 
    cout << y-1 << endl ;