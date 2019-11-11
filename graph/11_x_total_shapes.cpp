#include <bits/stdc++.h>
using namespace std;

bool visited[51][51] = {false};

void x_total_shapes_util(vector<int> adj[], int n, int m, int i, int j) {
  queue<pair<int, int>> q;
  q.push(make_pair(i, j));
  visited[i][j] = true;

  int row[] = {1, 0, -1, 0};
  int col[] = {0, 1, 0, -1};

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();

    for (int i = 0; i < 4; ++i) {
      int r = p.first + row[i];
      int c = p.second + col[i];

      if (r >= 0 && r < n && c >= 0 && c < m && !visited[r][c] && adj[r][c]) {
        visited[r][c] = true;
        q.push(make_pair(r, c));
      }
    }
  }
}

int x_total_shapes(vector<int> adj[], int n, int m) {
  for (int i = 0; i < 51; ++i) {
    for (int j = 0; j < 51; ++j) {
      visited[i][j] = false;
    }
  }
  int c = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (!visited[i][j] && adj[i][j]) {
        x_total_shapes_util(adj, n, m, i, j);
        ++c;
      }
    }
  }
  return c;
}

int main(int argc, char const* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < n; ++i) {
      string s;
      cin >> s;
      for (auto c : s) {
        if (c == 'X') {
          adj[i].push_back(1);
        } else {
          adj[i].push_back(0);
        }
      }
    }
    cout << x_total_shapes(adj, n, m) << '\n';
  }
  return 0;
}
