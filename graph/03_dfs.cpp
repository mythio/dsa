#include <bits/stdc++.h>
using namespace std;

void solve(int s, vector<int> adj[], vector<bool> &visited) {
  visited[s] = true;
  cout << s << ' ';
  for (auto i : adj[s]) {
    if (!visited[i]) {
      solve(i, adj, visited);
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
    vector<bool> visited(v, false);
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
    }
    int s = 0;
    solve(s, adj, visited);
    cout << '\n';
  }
  return 0;
}
