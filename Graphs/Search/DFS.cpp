
vector<int> u;
vector<vector<int>> g;

void dfs(int v){
    u[v] = 1;
    for (auto to : g[v]){
        if (u[to]) continue;
        dfs(to);
    }
}