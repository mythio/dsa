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
    int res = INT_MAX;
    int l = 0;
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
      sum += a[i];
      while (sum >= k) {
        res = min(res, i + 1 - l);
        sum -= a[l++];
      }
    }
    cout << (res != INT_MAX ? res : 0) << '\n';
  }
  return 0;
}
