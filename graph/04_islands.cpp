#include <bits/stdc++.h>
using namespace std;

bool visited[100][100] = {false};

void bfs_trav(vector<int> island[], int n, int m, int i, int j) {
  queue<pair<int, int>> q;
  q.push(make_pair(i, j));
  visited[i][j] = true;
  int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  while (!q.empty()) {
    int r = q.front().first;
    int c = q.front().second;
    q.pop();
    for (int k = 0; k < 8; ++k) {
      if (r + row[k] < n && r + row[k] >= 0 && c + col[k] < m &&
          c + col[k] >= 0 && island[r + row[k]][c + col[k]] &&
          !visited[r + row[k]][c + col[k]]) {
        visited[r + row[k]][c + col[k]] = true;
        q.push(make_pair(r + row[k], c + col[k]));
      }
    }
  }
}

int countIslands(vector<int> island[], int n, int m) {
  int c = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      visited[i][j] = false;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (island[i][j] && !visited[i][j]) {
        bfs_trav(island, n, m, i, j);
        c++;
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
    vector<int> island[n];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int p;
        cin >> p;
        island[i].push_back(p);
      }
    }
    cout << countIslands(island, n, m) << '\n';
  }
  return 0;
}
