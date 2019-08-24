#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int dp[20][20] = {0};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
      dp[i][0] = 1;
    }
    for (int i = 0; i < m; ++i) {
      dp[0][i] = 1;
    }
    for (int i = 1; i < n; ++i) {
      for (int j = 1; j < m; ++j) {
        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
      }
    }
    cout << dp[n - 1][m - 1] << '\n';
  }
  return 0;
}
