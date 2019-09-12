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
    vector<vector<int>> a(n);
    for (int i = 0; i < n; ++i) {
      a[i] = vector<int>(n);
      for (int j = 0; j < n; ++j) {
        cin >> a[i][j];
      }
    }
    vector<int> v(n);
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
      int pv = 0;
      int ph = 0;
      for (int j = 0; j < n; ++j) {
        pv = max(pv, a[i][j]);
        ph = max(ph, a[j][i]);
      }
      v[i] = pv;
      h[i] = ph;
    }
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        cout << min(v[i], h[j]) << ' ';
      }
      cout << '\n';
    }
    cout << '\n';
  }
  return 0;
}