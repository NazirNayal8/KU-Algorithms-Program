#include <bits/stdc++.h>

using namespace std;

const int MX = 1e5;

int n,m;
vector<int> g[MX];
vector<int> visited(MX,false);

// this way we iterate over all nodes in dfs manner

int main(){
    cin >> n >> m;
    for(int i=0 ; i<m ; ++i){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    queue<int> q;

    // we shall start from node 1
    q.push(1);
    visited[1] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto v : g[node]){
            if(!visited[v]){
                visited[v] = 1;
                q.push(v);
            }
        }
    }

}