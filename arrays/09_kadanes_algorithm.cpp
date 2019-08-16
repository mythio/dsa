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
    int ans = -1, ma = 0;
    for (auto i : a) {
      ma += i;
      ma = max(0, ma);
      ans = max(ma, ans);
    }
    cout << ans << '\n';
  }
  return 0;
}
