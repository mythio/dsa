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
    if (n < 0) {
      cout << -n << '\n';
    } else {
      cout << n << '\n';
    }
  }
  return 0;
}
