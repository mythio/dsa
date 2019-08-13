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
    int m = -1;
    stack<int> ans;
    for (int i = a.size() - 1; i >= 0; --i) {
      if (m <= a[i]) {
        ans.push(a[i]);
        m = a[i];
      }
    }
    while (!ans.empty()) {
      cout << ans.top() << ' ';
      ans.pop();
    }
    cout << '\n';
  }
  return 0;
}
