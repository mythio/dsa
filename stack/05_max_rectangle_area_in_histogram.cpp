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
    stack<int> st;
    int ans = 0;
    int i = 0;
    while (i < n) {
      if (st.empty() || a[i] >= a[st.top()]) {
        st.push(i++);
      } else {
        int tp = st.top();
        st.pop();
        int area = a[tp] * (st.empty() ? i : i - st.top() - 1);
        ans = max(ans, area);
      }
    }
    while (!st.empty()) {
      int tp = st.top();
      st.pop();
      int area = a[tp] * (st.empty() ? i : i - st.top() - 1);
      ans = max(ans, area);
    }
    cout << ans << '\n';
  }
  return 0;
}
