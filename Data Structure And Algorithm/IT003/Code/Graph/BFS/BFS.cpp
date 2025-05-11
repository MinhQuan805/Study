#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int start, vector<vector<int>> &adj, vector<bool> &visited)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int x : adj[u])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main()
{
    int v, e, u;
    cout << "Nhap so dinh: ";
    cin >> v;
    cout << "Nhap so canh: ";
    cin >> e;
    cout << "Nhap dinh xuat phat: ";
    cin >> u;
    vector<vector<int>> ke(v + 1);
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        // Chỉ cần bỏ ke[x].push_back(y) thì nó sẽ chỉ còn lại 1 hướng thành đồ thị có hướng
        ke[y].push_back(x);
    }
    vector<bool> visited(v + 1, false);
    BFS(u, ke, visited);
    return 0;
}
