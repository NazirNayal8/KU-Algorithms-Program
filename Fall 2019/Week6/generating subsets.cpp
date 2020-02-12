#include <bits/stdc++.h>

using namespace std;

int n;
int a[30];
int x;

bool f(int idx, vector<int> v){
    if(idx == n){
        int sum = 0;
        for(int i=0 ; i<v.size() ; ++i){
                sum = sum + v[i];
        }
        if(sum == x){
            return true;
        }
        return false;
    }
    bool ans1 = f(idx + 1,v)
    v.push_back(a[idx]);
    bool ans2 = f(idx + 1,v);
    
    return ans1 || ans2;
}

int main(){
    
    cin >> n >> x;
    
    for(int i=0 ; i<n ; ++i){
        cin >> a[i];
    }
    
    
    
    for(int i = 0 ; i < (1 << n) ; ++i){
        int sum = 0;
        for(int j = 0 ; j<n ; ++j){
            if((i & (1 << j)) != 0)
                sum += a[j];
        }
        if(sum == x){
            cout << "yes";
            break;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}