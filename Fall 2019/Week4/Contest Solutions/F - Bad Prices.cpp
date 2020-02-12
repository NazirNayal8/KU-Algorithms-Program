#include <bits/stdc++.h>

using namespace std;
 

// NOTE: This solution includes some tools that he haven't covered
// If you are reading this, please google the things you did not understand
// or send question on slack. Thank you.

int t;
int main(){
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i=0 ; i<n ; ++i){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int mn = v.back();
        int ans = 0;
        for(int i=n-2 ; i>=0 ; --i){
            if(v[i] > mn)ans++;
            mn = min(v[i],mn);
        }
        cout << ans << "\n";
    }
}