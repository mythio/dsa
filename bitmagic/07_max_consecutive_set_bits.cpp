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
    int ans = 0;
    while (n) {
      n &= (n << 1);
      ++ans;
    }
    cout << ans << '\n';
  }
  return 0;
}
