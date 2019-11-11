#include <bits/stdc++.h>

using namespace std;

string DecimalToBinary(int x){
    
    string ans = "";
    
    while(x != 0){
        if(x % 2 == 0)
            ans += "0";
        else
            ans += "1";
        x = (x >> 1);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int BinaryToDecimal(string x){
    
    int ans = 0;
    
    reverse(x.begin(),x.end());
    
    int len = x.length();
    
    for(int i=0 ; i<len ; ++i){
        if(x[i] == '1')
            ans += (1 << i);
    }
    
    return ans;
}


int main(){
 
 int n;
 int a[1000001];
 
 cin >> n;
 
 for(int i=0 ; i<n ; ++i)
    cin >> a[i];
    
    int ans = a[0];
    
    for(int i=1 ; i<n ; ++i){
        ans = ans ^ a[i];
    }
    
//    cout << ans << endl;
 
    
    int a = 4 , b = 7;
    
    int a = 7 , b = 4;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
 
 
}






    