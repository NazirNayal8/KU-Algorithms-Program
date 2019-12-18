#include <bits/stdc++.h>
#define LL long long
#define PI pair<int,int>
#define PL pair<LL,LL>
#define st first
#define nd second
#define all(x) x.begin(),x.end()
using namespace std;
 
const int MX = 1e5 + 5;
const int MOD = 1e9 + 7;
 
int a[5];
 
int main(){
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int sum = a[0] + a[1] + a[2] + a[3];
    if(sum&1)
        return 0 * puts("NO");
    int x = sum / 2;
    for(int i=0 ; i < (1 << 4) ; ++i){
        int k = 0;
        for(int j=0 ; j<4 ; ++j)
            if((1<<j)&i)
                k += a[j];
        if(k == x)
            return 0 * puts("YES");
    }  
    puts("NO");
}