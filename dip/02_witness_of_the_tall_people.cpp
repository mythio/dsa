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
    int c = 0;
    int m = -1;
    for (int i = n - 1; i >= 0; --i) {
      if (m < a[i]) {
        m = a[i];
        ++c;
      }
    }
    cout << c << '\n';
  }
  return 0;
}
