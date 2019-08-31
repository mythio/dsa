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
    int k;
    cin >> k;
    vector<int> map(100001, 0);
    for (int i = 0; i < n; ++i) {
      ++map[a[i]];
    }
    int c = 0;
    for (auto i : map) {
      if (i > n / k) {
        ++c;
      }
    }
    cout << c << '\n';
  }
  return 0;
}
