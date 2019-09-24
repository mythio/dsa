#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = INT_MAX;
    while (true) {
      int p = sqrt(n);
      int prev = n;
      for (int i = p; i >= 1; --i) {
        if (n % p == 0) {
          n = n / p;
          ans = min(ans, n + 1);
          break;
        }
      }
      if (n == prev) {
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
