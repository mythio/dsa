#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int adj[n][m];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> adj[i][j];
      }
    }
  }
  return 0;
}
