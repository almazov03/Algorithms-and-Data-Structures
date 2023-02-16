
void bfs(const vector<vector<int>> &g, int s) {
    int n = g.size();
    vector<int> u(n), d(n, -1);
    queue<int> q;
    u[s] = d[s] = 0;
    q.push(s);
    while(!q.empty()){
        int v = q.front(); q.pop();
        for (auto to: g[v]){
            if (u[to]) continue;
            d[to] = d[v] + 1;
            u[to] = 1;
            q.push(to);
        }
    }
}