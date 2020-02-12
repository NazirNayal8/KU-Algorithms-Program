#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n , num  ;
 
    cin >> n ;
 
    if (n%2==0){
        num = n/2 ;
        cout << num << endl ;
        for (int i=0 ; i< num ; ++i)
            cout << 2 << " " ;
    }else{
        num = (n-3)/2 ;
        cout << num+1 << endl ;
        for (int i=0 ; i<num ; ++i)
            cout << 2 << " " ;
           cout << 3 << endl ;
    }
}