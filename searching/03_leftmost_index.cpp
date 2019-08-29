#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int b, int e, int x) {
  if (b > e) {
    return -1;
  } else {
    int m = (b + e) / 2;
    if (a[m] == x && (m == 0 || a[m - 1] != a[m])) {
      return m;
    } else {
      if (a[m] >= x) {
        return solve(a, b, m - 1, x);
      } else {
        return solve(a, m + 1, e, x);
      }
    }
  }
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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int k;
    cin >> k;
    cout << solve(a, 0, n - 1, k) << '\n';
  }
  return 0;
}