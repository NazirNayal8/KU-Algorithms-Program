#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int a[6];
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	int ans = 0;
	string s;
	cin >> s;
	for(auto el : s)
		ans += a[el - '0'];
	cout << ans << endl;
}