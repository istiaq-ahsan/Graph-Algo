#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, m;
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>>d = {{-1, 0},{1, 0},{0, -1},{0, 1}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void dfs(int si, int sj){
    cout << si << " " << sj << '\n';
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        /* code */
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
            dfs(ci, cj);
        }
    }
    
}

 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> grid[i][j];
        }
        
    }

    int si, sj; cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    
    
    return 0;
}