#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int diff = a ^ b;
    int c = 0;
    while (diff) {
      ++c;
      diff &= (diff - 1);
    }
    cout << c << '\n';
  }
  return 0;
}
