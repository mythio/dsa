#include <bits/stdc++.h>
using namespace std;

int getNum(string s) {
  int p = 0;
  for (int i = 0; i < s.size(); ++i) {
    p = p * 10 + (s[i] - '0');
  }
  return p;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  int k, n;
  cin >> k >> n;
  int ans = 0;
  int i = 0;
  while (i < n) {
    string str = "";
    int res = 0;
    int j = i;
    while (j < n && res <= k) {
      str += s[j];
      res = getNum(str);
      ++j;
      if (res <= k) ++ans;
    }
    ++i;
  }
  cout << ans << ' ';
  return 0;
}
