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
    string res = "";
    int c = 0;
    for (auto i : s) {
      if (i == '(') {
        c++;
      } else if (i == ')') {
        c--;
      }
      if (c != 0 && i != '(') {
        res += i;
      } else if (c != 1 && i != ')') {
        res += i;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
