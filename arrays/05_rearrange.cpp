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
    int m = a[n - 1] + 1;
    int p1 = n - 1, p2 = 0;
    for (int i = 0; i < n; ++i) {
      if (i % 2) {
        a[i] += (a[p2] % m) * m;
        ++p2;
      } else {
        a[i] += (a[p1] % m) * m;
        --p1;
      }
    }
    for (int i = 0; i < n; ++i) {
      a[i] /= m;
    }
    for (int i = 0; i < n; ++i) {
      cout << a[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
