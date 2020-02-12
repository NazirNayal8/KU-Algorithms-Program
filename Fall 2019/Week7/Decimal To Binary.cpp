#include <bits/stdc++.h>

using namespace std;

string decimal_to_binary(int x){
    string ans = "";
    while(x > 0){
        if(x & 1)
            ans += "1";
        else 
            ans += "0";
        x = x >> 1;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int k = 13;

    cout << decimal_to_binary(k);
}