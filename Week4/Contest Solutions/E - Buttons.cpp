#include <bits/stdc++.h>
#define LL long long
#define PI pair<int,int>
#define PL pair<LL,LL>
#define st first
#define nd second
#define all(x) x.begin(), x.end()
 
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
 
    int ans = 0;
    for(int i = 1 ; i <= n ; ++i){
        ans += (n - i) * i;
    }
 
    cout << ans + n << endl;
 
}