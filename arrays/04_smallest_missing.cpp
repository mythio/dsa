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
    vector<bool> count(100000, false);
    for (int i = 0; i < n; ++i) {
      if (a[i] > 0) {
        count[a[i] - 1] = true;
      }
    }
    for (int i = 0; i < 100000; ++i) {
      if (!count[i]) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
  return 0;
}
