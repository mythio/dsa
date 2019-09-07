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
    for (int i = 1; i < s.size(); ++i) {
      if (!st.empty() && st.top() == s[i]) {
        st.pop();
      } else {
        st.push(s[i]);
      }
    }
    string res = "";
    while (!st.empty()) {
      res = st.top() + res;
      st.pop();
    }
    if (res.size() == 0) {
      cout << "Empty String\n";
    }
    cout << res << '\n';
  }
  return 0;
}
