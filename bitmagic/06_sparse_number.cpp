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
    bool f = 0;
    int p = n;
    while (n) {
      if ((n & 3) == 3) {
        f = 1;
        break;
      }
      n = n >> 1;
    }
    cout << f << '\n';
  }
  return 0;
}
