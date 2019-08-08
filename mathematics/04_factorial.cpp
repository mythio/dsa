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
    double c = 0;
    if (n == 0) {
      c = 0;
    }
    for (int i = 1; i <= n; ++i) {
      c += log10(i);
    }
    cout << ceil(c) << '\n';
  }
  return 0;
}
