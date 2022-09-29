#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

  // adjency matrix
  
  // int n, m;
  // cin >> n >> m;

  // int graph[n][m];
  // for (int i = 0; i < m; i++)
  // {
  //   int u, v;
  //   cin >> u >> v;

  //   graph[u][v] = 1;
  //   graph[v][u] = 1;
  // }

  // list
  int n, m;
  cin >> n >> m;

  vector<int> graph[n + 1];
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;

    graph[u].push_back(v);
    graph[v].push_back(u);
  }
}