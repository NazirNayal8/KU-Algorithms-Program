#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long  n , x , sum=0 , odd=INT_MAX ;
 
    cin >> n ;
    for(int i=0 ; i<n ; ++i){
        cin >> x ;
        sum+=x ;
        if (x%2==1) odd = min (odd , x);
    }
 
    if (sum % 2 == 0) cout << sum << endl ;
    else cout << sum - odd << endl ;
 
 
}