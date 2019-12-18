#include <bits/stdc++.h>
using namespace std ;
vector<pair<int,int> > v ;
int main()
{
    int s , n, x, y  ; scanf("%d%d",&s,&n);
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d%d",&x,&y);
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    bool is = true ;
 
    for(int i=0 ; i<n ; ++i)
    {
        if(s<=v[i].first)
        {
            is=false;
            break;
        }
        else s+=v[i].second ;
 
    }
 
    if(is) cout << "YES\n";
    else cout << "NO\n";
}