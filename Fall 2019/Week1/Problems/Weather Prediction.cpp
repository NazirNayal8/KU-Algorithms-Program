#include <bits/stdc++.h>

using namespace std;


/*
	CHALLENGE:
	can you solve this problem without
	declaring any string variable ?
	
*/

int main(){

    string s;

    cin >> s;

    if(s == 'Sunny')
        cout << "Cloudy" << endl;
    else if(s == 'Cloudy')
        cout << "Rainy" << endl;
    else
        cout << "Sunny" << endl;


}