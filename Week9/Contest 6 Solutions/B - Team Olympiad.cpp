#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n , a[5004] , prog=0 , math=0 , pe=0 , temp ;
    vector<int> x , y , z ;
    cin >> n ;
 
    for (int i=0 ; i<n ; ++i)
    {
        cin >> a[i];
 
        if (a[i]==1)
        {
            prog++;
            x.push_back(i);
        }
        else if (a[i]==2)
        {
             math++;
            y.push_back(i);
        }
        else
        {
            pe++ ;
            z.push_back(i);
        }
 
    }
 
    temp = min(prog , math);
    temp = min(temp , pe);
 
    cout << temp << endl ;
 
    for(int i=0 ; i < temp  ; i++)
    {
        cout << x[i] + 1 << " " << y[i] + 1 << " " << z[i] + 1 << endl ;
    }
 
}