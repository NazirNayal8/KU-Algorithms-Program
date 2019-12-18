#include <bits/stdc++.h>
 
using namespace std;
 
 
int MSB(int x){
    int ans = -1;
    for(int i=0 ; i<30 ; ++i)
        if((1 << i) & x)
            ans = i;
    return ans;
}
 
int Is_Correct(int x){
    for(int i=0 ; (x >> i) > 1 ; ++i){
        if(((1 << i) & x) == 0 && ((x >> i) != 0)){
            return false;
        }
    }
    return true;
}
 
int main(){
    int x;
    cin >> x;
    vector<int> ans;
    int steps = 0;
    while(!Is_Correct(x)){
        int idx = MSB(x);
        x = x ^ ((1 << (idx + 1)) - 1);
        ans.push_back(idx + 1);
        steps++;
        if(Is_Correct(x))break;
        steps++;
        x++;
   }
   cout << steps << endl;
   for(auto el : ans)
    cout << el << " ";
 
}