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
    int m = INT_MAX;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
      m = min(m, a[i]);
      st.push(m);
    }
    while (!st.empty()) {
      cout << st.top() << ' ';
      st.pop();
    }
    cout << '\n';
  }
  return 0;
}
