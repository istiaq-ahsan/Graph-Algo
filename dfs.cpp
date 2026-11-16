#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1005];
bool vis[1005];

void dfs(int src){
    cout << src << " ";
    vis[src] = true;

    for(int child: adj[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b; 
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}