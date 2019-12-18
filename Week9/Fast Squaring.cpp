#include <bits/stdc++.h>

using namespace std;

int ex(int x,int y){
    if(y == 0)
        return 1;
    if(y % 2 == 1) return x * ex(x * x,y / 2);
    return ex(x * x,y / 2);
}

int m = 1e9 + 7;
// compute pow(x,y) % m;
int exModulo(int x,int y){
    if(y == 0)
        return 1;
    if(y % 2 == 1) return (x * ex(x * x % m,y / 2)) % m;
    return ex(x * x % m, y / 2);
}

int main(){

}