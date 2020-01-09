#include <bits/stdc++.h>
using namespace std;

void dfs(int s, vector<int> adj[], bool visited[]) {
  visited[s] = true;
  cout << s << ' ';
  for (auto i : adj[s]) {
    if (!visited[i]) {
      dfs(i, adj, visited);
    }
  }
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
      int p, q;
      cin >> p >> q;
      adj[p - 1].push_back(q - 1);
      adj[q - 1].push_back(p - 1);
    }
    int ans = 0;
    bool visited[v] = {false};
    for (int i = 0; i < v; ++i) {
      if (!visited[i]) {
        ++ans;
        dfs(i, adj, visited);
        cout << '\n';
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
