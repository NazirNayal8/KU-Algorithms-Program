#include <bits/stdc++.h>
using namespace std;

// O(sqrt(n))
bool isPrime(int x){
    for(int i=2 ; i*i <= x ; ++i)
        if(x % i == 0) return false;
    return true;
}

int main(){

    if(isPrime(3)) puts("YES");

}