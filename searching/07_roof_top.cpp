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
    int m = 0;
    int ans = 0;
    for (int i = 1; i < n; ++i) {
      if (a[i - 1] < a[i]) {
        m++;
      } else {
        m = 0;
      }
      ans = max(ans, m);
    }
    cout << ans << '\n';
  }
  return 0;
}
