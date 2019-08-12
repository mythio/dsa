#include <bits/stdc++.h>
using namespace std;

void solve(string str, int pos, vector<string> &res) {
  if (pos == str.size()) {
    return;
  } else {
    string temp;
    for (int i = pos; i < str.size(); ++i) {
      temp += str[i];
      res.push_back(temp);
    }
    solve(str, pos + 1, res);
  }
}

void substring(string s) {
  vector<string> res;
  solve(s, 0, res);
  for (string i : res) {
    cout << i << ' ';
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    substring(s);
    cout << '\n';
  }
  return 0;
}
