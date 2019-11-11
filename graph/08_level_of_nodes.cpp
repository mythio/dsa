#include <bits/stdc++.h>
using namespace std;

int level_of_node(vector<int> adj[], int v, int x) {
  bool visited[v] = {false};
  visited[0] = true;
  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();
    for (auto i : adj[p.first]) {
      if (!visited[i]) {
        if (p.first == x) {
          return p.second;
        }
        q.push(make_pair(i, p.second + 1));
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
    int e, v;
    cin >> e >> v;
    vector<int> adj[v];
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    int x;
    cin >> x;
    cout << level_of_node(adj, v, x) << '\n';
  }
  return 0;
}
