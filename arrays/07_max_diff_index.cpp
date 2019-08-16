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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) {
      if (i == 0) {
        l[0] = a[0];
        r[n - 1] = a[n - 1];
      } else {
        l[i] = min(l[i - 1], a[i]);
        r[n - 1 - i] = max(r[n - i], a[n - 1 - i]);
      }
    }
    int i = 0, j = 0;
    int m = -1;
    for (i = 0; i < n; ++i) {
      while (l[i] <= r[j] && j < n) {
        m = max(m, j - i);
        ++j;
      }
    }
    cout << m << '\n';
  }
  return 0;
}
