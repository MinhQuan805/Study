#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Dùng recursion để duyệt sâu
void DFS_Recursion(int start, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[start] = true;
    for (int i : adj[start])
        if (!visited[start])
        {
            DFS_Recursion(i, adj, visited);
        }
}

// Dùng stack để duyệt sâu
void DFS(int start, vector<vector<int>> &adj, vector<bool> &visited)
{
    stack<int> st;
    st.push(start);

    while (!st.empty())
    {
        int u = st.top();
        st.pop();

        if (!visited[u])
        {
            visited[u] = true;
            cout << u << " ";

            for (int i = adj[u].size() - 1; i >= 0; --i)
            {
                int v = adj[u][i];
                if (!visited[v])
                    st.push(v);
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
        // Chỉ cần bỏ ke[y].push_back(x); thì nó sẽ chỉ còn lại 1 hướng thành đồ thị có hướng
        ke[y].push_back(x);
    }
    vector<bool> visited(v + 1, false);
    DFS(u, ke, visited);
    return 0;
}
