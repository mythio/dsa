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
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << fact << '\n';
  }
  return 0;
}
