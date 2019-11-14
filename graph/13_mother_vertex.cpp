#include <bits/stdc++.h>
using namespace std;

int find_mother(vector<int> adj[], int v) {
  for (int i = 0; i < v; ++i) {
    queue<int> q;
    bool visited[v] = {false};
    q.push(i);
    visited[i] = true;
    while (!q.empty()) {
      int p = q.front();
      q.pop();
      for (auto s : adj[p]) {
        if (!visited[s]) {
          visited[s] = true;
          q.push(s);
        }
      }
      bool found = true;
      for (int s = 0; s < v && found; ++s) {
        if (!visited[s]) {
          found = 0;
        }
      }
      if (found) {
        return i;
      }
    }
  }
  return -1;
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
    }
    cout << find_mother(adj, v) << '\n';
  }
  return 0;
}