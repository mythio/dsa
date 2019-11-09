#include <bits/stdc++.h>
using namespace std;

bool isConnected(vector<int> adj[], int i, int v, vector<bool> &visited) {
  vector<int> parent(v, -1);

  queue<int> q;
  q.push(i);
  visited[i] = true;
  while (!q.empty()) {
    int p = q.front();
    q.pop();

    for (auto i : adj[p]) {
      if (!visited[i]) {
        visited[i] = true;
        q.push(i);
        parent[i] = p;
      } else if (parent[p] != i) {
        return true;
      }
    }
  }
  return false;
}

bool detectCycles(vector<int> adj[], int v) {
  vector<bool> visited(v, false);
  for (int i = 0; i < v; ++i) {
    if (!visited[i] && isConnected(adj, i, v, visited)) {
      return true;
    }
  }
  return false;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    cout << detectCycles(adj, v) << '\n';
  }
  return 0;
}
