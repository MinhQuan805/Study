#include<iostream>
#include<set>
#include<map>
using namespace std;

void Input(map<int,set<int>>& G) {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int u, v;
        cin >> u >> v;
        G[u].insert(v);
		G[v].insert(u);
    }
}

void OutputVertex(map<int,set<int>> G) {
    for(map<int,set<int>>::iterator i=G.begin(); i!=G.end(); i++)
        cout << i->first << " ";
}
void OutputDinhKe(map<int,set<int>> G, int u) {
    for(set<int>::iterator i=G[u].begin(); i!=G[u].end(); i++)
        cout << *i << " ";
}

int main() {
    map<int,set<int>> graph;
    Input(graph);

    int u;
    cin >> u;
    OutputDinhKe(graph, u);

    return 0;
}
