#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  while (q--) {
    int l, r;
    cin >> l >> r;
    int c = INT_MAX;
    for (int i = l; i <= r; ++i) {
      c = min(c, a[i]);
    }
    cout << c << '\n';
  }
  return 0;
}
