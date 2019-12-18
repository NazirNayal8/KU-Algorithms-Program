#include <bits/stdc++.h>
using namespace std;
 
const int MX = 1e6 + 5;
 
int n;
 
int main(){
	cin >> n;
	if(n % 2 == 0) cout << 4 << " " << n - 4 << endl;
	if(n % 2 == 1) cout << 9 << " " << n - 9 << endl;
}