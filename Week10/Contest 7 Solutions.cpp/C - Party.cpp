#include <bits/stdc++.h>
using namespace std;

const int MX = 2020;

int n;

vector<int> roots;

vector<int> g[MX];

int ans = 0;

void dfs(int x,int level){
    ans = max(ans,level);
    for(auto v : g[x])
        dfs(v,level + 1);
}


int main() {
    cin >> n;
    for(int i=1 ; i<=n ; ++i){
        int p;
        cin >> p;
        if(p == -1) roots.push_back(i);
        else g[p].push_back(i);
    }
    
    for(auto el : roots)
        dfs(el,1);
    
    cout << ans << endl;    
}