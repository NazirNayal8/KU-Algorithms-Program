#include <bits/stdc++.h>

using namespace std;

int main(){

    int a[100];
    int n;
    int target;

    cin >> n;
    for(int i=0 ; i<n ; ++i){
        cin >> a[i];
    }

    cin >> target;

    int l = 0, r = n;
    bool found = false;
    while(l < r){
        int mid = (l + r) / 2;
        if(a[mid] == target){
            found = true;
            break;
        }else if(a[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }

    if(found) cout << "found";
    else cout << "Not found";

}