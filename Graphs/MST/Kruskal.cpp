
int find_p(int v) { return (v == p[v] ? v : p[v] = find_p(p[v])); }
bool union_sets(int a, int b){
    a = find_p(a), b = find_p(b);
    if (a == b) return 1;
    if (rnd() & 1) swap (a, b);
    p[a] = b;
    return 0;
}

struct Edge{ long long a, b, w; };

vector<Edge> Kruskal(vector<edge> &edges){
    sort(edges.begin(), edges.end(), [](const Edge &a, const Edge &b){
        return a.w < b.w;
    });

    vector<Edge> MST;
    for (auto [a, b, w] : edges){
        if (union_sets(a, b)) continue;
        MST.emplace_back(a, b, w);
    }

    return MST;
}