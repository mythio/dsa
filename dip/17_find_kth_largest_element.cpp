#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int l, int r) {
  int large = a[r];
  int i = l;
  for (int j = l; j < r; ++j) {
    if (a[j] < large) {
      swap(a[i], a[j]);
      ++i;
    }
  }
  swap(a[i], a[r]);
  return i;
}

int main(int argc, char const* argv[]) {
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
    k = n - k;
    int l = 0, r = n - 1;
    while (l < r) {
      int p = partition(a, l, r);
      if (p == k) {
        break;
      } else if (p < k) {
        l = p + 1;
      } else {
        r = p - 1;
      }
    }
    cout << a[k] << '\n';
  }
  return 0;
}
