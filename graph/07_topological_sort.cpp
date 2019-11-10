#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], bool visited[], stack<int> &s, int v) {
  visited[v] = true;

  for (auto i : adj[v]) {
    if (!visited[i]) {
      dfs(adj, visited, s, i);
    }
  }
  s.push(v);
}

void topological_sort(vector<int> adj[], int v) {
  stack<int> s;

  bool visited[v] = {false};
  for (int i = 0; i < v; ++i) {
    visited[i] = false;
  }

  for (int i = 0; i < v; ++i) {
    if (visited[i] == false) {
      dfs(adj, visited, s, i);
    }
  }

  while (!s.empty()) {
    cout << s.top() << ' ';
    s.pop();
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int e, v;
    cin >> e >> v;
    vector<int> adj[v];
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
    }
    topological_sort(adj, v);
  }
  return 0;
}