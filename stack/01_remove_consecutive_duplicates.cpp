#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    stack<char> st;
    st.push(s[0]);
    for (auto i : s) {
      if (st.top() != i) {
        st.push(i);
      }
    }
    string res;
    while (!st.empty()) {
      res = char(st.top()) + res;
      st.pop();
    }
    cout << res << '\n';
  }
  return 0;
}