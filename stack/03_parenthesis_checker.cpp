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
    for (auto i : s) {
      if (st.empty()) {
        st.push(i);
      } else {
        if (i == '(' || i == '{' || i == '[') {
          st.push(i);
        } else {
          if (i == ')' && st.top() == '(') {
            st.pop();
          } else if (i == '}' && st.top() == '{') {
            st.pop();
          } else if (i == ']' && st.top() == '[') {
            st.pop();
          }
        }
      }
    }
    if (st.empty()) {
      cout << "balanced\n";
    } else {
      cout << "not balanced\n";
    }
  }
  return 0;
}
