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
    vector<int> span(n);
    span[0] = 1;
    for (int i = 1; i < n; ++i) {
      while (!st.empty() && a[st.top()] <= a[i]) {
        st.pop();
      }
      span[i] = st.empty() ? (i + 1) : i - st.top();
      st.push(i);
    }
    for (auto i : span) {
      cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}
