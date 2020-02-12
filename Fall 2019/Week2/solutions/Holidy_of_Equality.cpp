#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    
    int n;
    int a[105];
    
    cin >> n;
    
    int mx = -1;
    
    for(int i=0 ; i<n ; ++i){
        
        cin >> a[i];
        
        if(a[i] > mx){
            mx = a[i];
        }
    }
    
    int ans = 0;
    
    for(int i=0 ; i<n ; ++i){
        
        int dif = mx - a[i];
        ans += dif;
    }
    
    cout << ans;
    
    
}