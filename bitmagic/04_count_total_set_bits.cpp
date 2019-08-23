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
    int c = 0;
    for (int i = 1; i <= n; ++i) {
      int p = i;
      while (p) {
        ++c;
        p &= (p - 1);
      }
    }
    cout << c << '\n';
  }
  return 0;
}
