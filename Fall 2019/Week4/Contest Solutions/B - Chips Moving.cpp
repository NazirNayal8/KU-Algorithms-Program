#include <bits/stdc++.h>
using namespace std;
 

int main(){
    int e = 0;
    int o = 0;
    int n;
    cin >> n;
    for(int i=0 ; i<n ; ++i){
        int x;
        cin >> x;
        if(x%2 == 1)o++;
        else e++;
    }
    cout << min(e,o) << "\n";
}