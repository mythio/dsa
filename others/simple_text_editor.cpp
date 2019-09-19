#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  stack<string> st;
  st.push("");
  while (n--) {
    int p;
    cin >> p;
    if (p == 1) {
      string s;
      cin >> s;
      st.push(st.top() + s);
    } else if (p == 2) {
      int k;
      cin >> k;
      string s = st.top();
      s = s.substr(0, s.size() - k);
      st.push(s);
    } else if (p == 3) {
      int k;
      cin >> k;
      cout << st.top()[k - 1] << '\n';
    } else {
      st.pop();
    }
    if (st.empty()) {
      st.push("");
    }
  }
  return 0;
}
