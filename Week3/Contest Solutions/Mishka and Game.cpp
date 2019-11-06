#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	int mishka = 0;
	int chris = 0;
 
	cin >> n;
 
	for(int i=0 ; i<n ; ++i){
		int m,c;
		cin >> m >> c;
		if(m > c)
			mishka++;
		if(m < c)
			chris++;
	}
	if(mishka > chris)
		cout << "Mishka";
	else if(mishka < chris)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
}