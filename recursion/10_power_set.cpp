#include <bits/stdc++.h>
using namespace std;

void solve(string str, string subset, int pos, vector<string> &res) {
  if (pos == str.size()) {
    res.push_back(subset);
  } else {
    solve(str, subset + str[pos], pos + 1, res);
    solve(str, subset, pos + 1, res);
    return;
  }
}

void powerSet(string s) {
  vector<string> res;
  solve(s, "", 0, res);
  sort(res.begin(), res.end());
  for (int i = 0; i < res.size(); ++i) {
    if (i == res.size() - 1) {
      cout << res[i] << ' ';
    } else {
      cout << res[i] << ", ";
    }
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
    powerSet(s);
    cout << '\n';
  }
  return 0;
}
