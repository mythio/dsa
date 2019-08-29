#include <bits/stdc++.h>
using namespace std;

int count(vector<int> a, int b, int e) {
  if (b > e) {
    return 0;
  } else {
    int m = (b + e) / 2;
    if (a[m] == 1 && (m == a.size() - 1 || a[m + 1] != 1)) {
      return m;
    } else if (a[m] == 1) {
      return count(a, m + 1, e);
    } else {
      return count(a, b, m - 1);
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
    cout << count(a, 0, n - 1) + 1 << '\n';
  }
  return 0;
}