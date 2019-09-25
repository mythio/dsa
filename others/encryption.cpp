#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  int n = s.size();
  int r = floor(sqrt(s.size()));
  int c = ceil(sqrt(s.size()));
  for (int i = 0; i < c; ++i) {
    int j = i;
    string res = "";
    while (j < n) {
      res += s[j];
      j += c;
    }
    cout << res << ' ';
  }
  return 0;
}
