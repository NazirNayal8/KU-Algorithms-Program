#include <bits/stdc++.h>

using namespace std;

int main(){

int n; // number of nodes
int m; // number of edges

// Adjacency Matrix:
int adj[1000][1000];
for(int i=0 ; i<m ; ++i){
    int x,y;
    cin >> x >> y;
    adj[x][y] = 1;
    adj[y][x] = 1;
}

// Adjacency List:

vector<int> g[1000];
for(int i=0 ; i<m ; ++i){
    int x,y;
    cin >> x >> y;
    g[x].push_back(y);
    g[y].push_back(x);
}


}