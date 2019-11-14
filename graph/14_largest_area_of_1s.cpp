#include <bits/stdc++.h>
using namespace std;

int find_area(vector<int> adj[], int n, int m) {
  bool visited[n][m] = {false};
  int ma = 0;
  int row[] = {1, 1, 1, 0, 0, -1, -1, -1};
  int col[] = {1, 0, -1, 1, -1, 1, 0, -1};
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (!visited[i][j] && adj[i][j]) {
        queue<pair<int, int>> q;
        int count = 1;
        q.push(make_pair(i, j));
        visited[i][j] = true;
        while (!q.empty()) {
          pair<int, int> p = q.front();
          q.pop();
          for (int s = 0; s < 8; ++s) {
            int r = p.first + row[s];
            int c = p.second + col[s];
            if (r >= 0 && c >= 0 && r < n && c < m && !visited[r][c] &&
                adj[r][c]) {
              visited[r][c] = true;
              q.push(make_pair(r, c));
              ++count;
            }
          }
        }
        ma = max(ma, count);
      }
    }
  }
  return ma;
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
      for (int j = 0; j < m; ++j) {
        int p;
        cin >> p;
        adj[i].push_back(p);
      }
    }
    cout << find_area(adj, n, m) << '\n';
  }
  return 0;
}
