#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, c, m;
    int c_count = 0;
    int w_count = 0;
    cin >> n >> c >> m;
    c_count = n / c;
    w_count = c_count;
    while (w_count >= m) {
      w_count -= m;
      c_count++;
      w_count++;
    }
    cout << c_count << '\n';
  }
  return 0;
}
