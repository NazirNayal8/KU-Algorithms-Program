#include <bits/stdc++.h>

using namespace std;

int main(){
    double L,H;
    cin >> H >> L;
    double ans = (L*L + H*H) / (2*H);
    ans -= H;
    cout << setprecision(10) << ans << "\n";
}