#include <bits/stdc++.h>

using namespace std;

/*
	CHALLENGE:
	can you solve this problem using only 1 for loop?
	
*/

int main(){

    int k,x;
    
    cin >> k >> x;
    
    for(int i = 0 ; i < k ; ++i){

        cout << x - (k - i) + 1 << " ";
    
    }

    for(int i = 1 ; i < k ; ++i){

        cout << x + i<< " ";
    
    }
    

}