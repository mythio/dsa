#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    char mat[n][n];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        cin >> mat[i][j];
      }
    }
    string s;
    bool f = false;
    cin >> s;
    for (int i = 0; i < n && !f; ++i) {
      for (int j = 0; j < n && !f; ++j) {
        int c = 0;
        int p = j;
        while (mat[i][p] == s[p] && p < n) {
          c++;
          p++;
        }
        if (c == s.size()) {
          f = 1;
        }
        c = 0;
        p = j;
        while (mat[p][i] == s[p] && p < n) {
          c++;
          p++;
        }
        if (c == s.size()) {
          f = 1;
        }
      }
    }
    cout << f << '\n';
  }
  return 0;
}
