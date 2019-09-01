#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int s = 0;
    int l = 0;
    int r = 0;
    for (int i = 0; i < n; ++i) {
      s += a[i];
      if (s > k && l < n) {
        s -= a[l];
        ++l;
      }
      if (s == k) {
        r = i;
        break;
      }
    }
    if (s == k) {
      cout << l + 1 << ' ' << r + 1 << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
  return 0;
}