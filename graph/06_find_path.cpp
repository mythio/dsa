#include <bits/stdc++.h>
using namespace std;

bool search_dest(vector<int> adj[], int n, int si, int sj, int di, int dj) {
  queue<pair<int, int>> q;
  bool visited[100][100] = {false};

  q.push(make_pair(si, sj));
  visited[si][sj] = true;
  int row[] = {-1, 0, 0, 1};
  int col[] = {0, -1, 1, 0};

  while (!q.empty()) {
    int r = q.front().first;
    int c = q.front().second;
    q.pop();
    for (int k = 0; k < 4; ++k) {
      if (r + row[k] >= 0 && r + row[k] < n && c + col[k] >= 0 &&
          c + col[k] < n && adj[r + row[k]][c + col[k]] >= 2 &&
          !visited[r + row[k]][c + col[k]]) {
        visited[r + row[k]][c + col[k]] = true;
        q.push(make_pair(r + row[k], c + col[k]));

        if (r + row[k] == di && c + col[k] == dj) {
          return true;
        }
      }
    }
  }
}

bool find_path(vector<int> adj[], int n) {
  int si, sj, di, dj;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (adj[i][j] == 1) {
        si = i, sj = j;
      } else if (adj[i][j] == 2) {
        di = i, dj = j;
      }
    }
  }
  return search_dest(adj, n, si, sj, di, dj);
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> adj[n];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        int p;
        cin >> p;
        adj[i].push_back(p);
      }
    }
    cout << find_path(adj, n) << '\n';
  }
  return 0;
}
