#include <bits/stdc++.h>
#define LL long long 
#define PI pair<int,int>
#define PL pair<LL,LL>
#define st first
#define nd second
#define all(x) x.begin(),x.end()
using namespace std;
 
const int MX = 1e6 + 5;
 
vector<bool> isPrime(MX,true);
 
void sieve(){
	for(int i = 2 ; i < MX ; ++i){
		if(isPrime[i]){
			for(int j = i + i ; j < MX ; j += i)
				isPrime[j] = false;
		}
	}
}
 
int n;
 
int main(){
	cin >> n;
	sieve();
	for(int i=0 ; i<n ; ++i){
		LL x;
		cin >> x;
		LL m = sqrt(x);
		if(x > 1 && m * m == x && isPrime[m])
			puts("YES");
		else
			puts("NO");
	}
}