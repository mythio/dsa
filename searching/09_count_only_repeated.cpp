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
    int l = -1;
    int c = 1;
    for (int i = 1; i < n; ++i) {
      if (a[i] == a[i - 1]) {
        l = a[i];
        c++;
      }
    }
    cout << l << ' ' << c << '\n';
  }
  return 0;
}
