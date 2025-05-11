#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int v, e;
    cout << "Nhap so dinh: ";
    cin >> v;
    cout << "Nhap so canh: ";
    cin >> e;
    vector<int> ke[v + 1]; // vector<vector<int>> ke;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= v; i++)
    {
        sort(ke[i].begin(), ke[i].end());
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << ':';
        for (int j = 0; j < ke[i].size(); j++)
            cout << ' ' << ke[i][j];
        cout << '\n';
    }
    return 0;
}