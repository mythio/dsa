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
    l[0] = a[0];
    r[n-1] = a[n-1];
    for (int i = 1; i < n; ++i) {
      l[i] = max(l[i - 1], a[i]);
    }
    for (int i = n - 2; i >= 0; --i) {
      r[i] = max(a[i], r[i + 1]);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      ans += min(l[i], r[i]) - a[i];
    }
    cout << ans << '\n';
  }
  return 0;
}