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
    vector<int> a(n + 2);
    for (int i = 0; i < n + 2; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < n + 2; ++i) {
      if (a[abs(a[i]) + 1] > 0) {
        a[abs(a[i]) + 1] *= -1;
      } else {
        cout << abs(a[i]) << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
