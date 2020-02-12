#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5;

int n,m;
vector<int> g[MX];
vector<int> visited(MX,false);

// this way we iterate over all nodes in dfs manner

void DFS(int x){
    visited[x] = true;
    for(auto v : g[x]){
        if(!visited[v]) DFS(x);
    }
}

int main(){
    cin >> n >> m;
    for(int i=0 ; i<m ; ++i){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=1 ; i<=n ; ++i){
        if(!visited[i]) DFS(i);
    }
    
}