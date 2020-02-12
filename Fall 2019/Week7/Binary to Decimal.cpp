#include <bits/stdc++.h>

using namespace std;

int binary_to_decimal(string binary){
    int ans = 0;
    reverse(binary.begin(),binary.end());
    for(int i = 0 ; i < binary.length() ; ++i){
        if(binary[i] == '1') ans += (1 << i);
    }
    return ans;
}

int main(){

    string k = "100101101";

    cout << binary_to_decimal(k);

}