#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int b, int e) {
  if (b > e) {
    return -1;
  } else {
    int m = (b + e) / 2;
    int n = a.size();
    if ((m == 0 && a[m] > a[m + 1]) || (m == n - 1 && a[m] > a[m - 1])) {
      return m;
    }
    if (m != 0 && m != n - 1 && a[m] > a[m - 1] && a[m] > a[m + 1]) {
      return m;
    }
    if (m != 0 && a[m] < a[m - 1]) {
      return solve(a, 0, m - 1);
    }
    if (m != n - 1 && a[m] < a[m + 1]) {
      return solve(a, m + 1, e);
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
    cout << solve(a, 0, n - 1) << '\n';
  }
  return 0;
}
