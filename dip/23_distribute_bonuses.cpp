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
    for (int i = 0; i < n; ++i) {
      int res = 1;
      if (i == 0) {
        if (a[i] > a[i + 1]) {
          ++res;
        }
      } else if (i == n - 1) {
        if (a[i] > a[i - 1]) {
          ++res;
        }
      } else {
        if (a[i] > a[i + 1]) {
          ++res;
        }
        if (a[i] > a[i - 1]) {
          ++res;
        }
      }
      cout << res << ' ';
    }
  }
  return 0;
}
