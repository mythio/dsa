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
    vector<int> l(n, 1);
    vector<int> r(n, 1);
    l[1] = a[0];
    r[n - 2] = a[n - 1];
    for (int i = 2; i < n; ++i) {
      l[i] = a[i - 1] * l[i - 1];
      r[n - i - 1] = a[n - i] * r[n - i];
    }
    for (int i = 0; i < n; ++i) {
      cout << l[i] * r[i] << '\n';
    }
  }
  return 0;
}
