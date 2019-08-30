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
    vector<int> count(1000001);
    for (int i = 0; i < n; ++i) {
      if (a[i] > 0) {
        ++count[a[i]];
      }
    }
    for (int i = 1; i < 1000001; ++i) {
      if (count[i] == 0) {
        cout << i << '\n';
        break;
      }
    }
  }
  return 0;
}
