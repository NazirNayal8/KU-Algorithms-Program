#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int a[101];
    cin >> n;

    int odd = 0;
    int even = 0;

    for(int i=0 ; i<n ; ++i){
        cin >> a[i];
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(even == 1){
        for(int i=0 ; i<n ; ++i){
            if(a[i] % 2 == 0)
                cout << i + 1;
        }
    }else{
        for(int i=0 ; i<n ; ++i){
            if(a[i] % 2 == 1)
                cout << i + 1;
        }
    }


}