#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
 
	int a[] = {100,20,10,5,1};
 
	int ans = 0;
	for(int i = 0 ; i < 5 ; ++i){
		while(n >= a[i]){
			ans++;
			n -= a[i];
		}
	}
	cout << ans << endl;
}