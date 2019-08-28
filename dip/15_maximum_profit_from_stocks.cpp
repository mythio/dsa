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
    vector<int> l(n);
    for (int i = n - 1; i >= 0; --i) {
      if (i == n - 1) {
        l[i] = a[i];
      } else {
        l[i] = max(l[i + 1], a[i]);
      }
    }
    int m = 0;
    for (int i = 0; i < n; ++i) {
      m = max(m, l[i] - a[i]);
    }
    cout << m << '\n';
  }
  return 0;
}
