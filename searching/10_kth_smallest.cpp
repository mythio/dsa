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
    vector<int> map(100001, 0);
    for (int i = 0; i < n; ++i) {
      ++map[a[i]];
    }
    int k;
    cin >> k;
    for (int i = 0; i < 100001; ++i) {
      if (map[i] && --k == 0) {
        cout << i << '\n';
        break;
      }
    }
  }
  return 0;
}