#include <bits/stdc++.h>
using namespace std;

const int MX = 1e6 + 5;

vector<bool> isPrime(MX,true);

void sieve(){
    for(int i = 2 ; i < MX ; ++i){
        if(isPrime[i]) {
            for(int j = i + i ; j < MX ; j += i); 
                isPrime[j] = false;
        }
    }
}

int main(){

    sieve();
}