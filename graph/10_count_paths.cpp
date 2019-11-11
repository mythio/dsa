#include <bits/stdc++.h>
using namespace std;

void count_util(vector<int> adj[], int s, int d, bool visited[], int& c) {
  visited[s] = true;

  if (s == d) {
    ++c;
  } else {
    for (auto i : adj[s]) {
      if (!visited[i]) {
        count_util(adj, i, d, visited, c);
      }
    }
  }
  visited[s] = false;
}

int count_path(vector<int> adj[], int v, int s, int d) {
  int c = 0;
  bool visited[v] = {false};
  count_util(adj, s, d, visited, c);
  return c;
}

int main(int argc, char const* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int e, v;
    cin >> v >> e;
    vector<int> adj[v];
    for (int i = 0; i < e; ++i) {
      int a, b;
      cin >> a >> b;
      adj[a - 1].push_back(b - 1);
      adj[b - 1].push_back(a - 1);
    }
    int s, d;
    cin >> s >> d;
    cout << count_path(adj, v, s - 1, d - 1) << '\n';
  }
  return 0;
}
