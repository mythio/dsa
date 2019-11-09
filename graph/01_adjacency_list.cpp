#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> adj[], int v) {
  for (int i = 0; i < v; ++i) {
    cout << i << ' ';
    for (auto p : adj[i]) {
      cout << p << ' ';
    }
    cout << '\n';
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
    vector <int> adj[v];
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    solve(adj, v);
  }
  return 0;
}
