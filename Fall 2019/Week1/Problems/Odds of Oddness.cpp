#include <bits/stdc++.h>

using namespace std;

/*

A background about probability:

if we have a box with balls (blue and red).
we have k blue balls and (n - k) red balls.

If we randomly choose to pick a ball from this box:

Probability of having a blue ball is (k / n)
Probability of having a red ball is ((n - k) / n)

In Brief, the probability of having A things, is equal
to the number of A's divided by the number of all things.

*/


int main(){

    int n;
    cin >> n;

    double ans = (double) (n - (n / 2) ) / n;

    cout << ans << endl;

}