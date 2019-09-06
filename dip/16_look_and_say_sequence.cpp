#include <bits/stdc++.h>
using namespace std;

vector<string> CACHE(31);

void solve() {
  CACHE[0] = "1";
  for (int i = 1; i < 31; ++i) {
    string s = CACHE[i - 1];
    string p = "";
    char curr = s[0];
    for (int j = 0; j < s.size(); ++j) {
      int c = 0;
      while (curr == s[j] && j < s.size()) {
        c++;
        j++;
      }
      p += char(c + '0');
      p += curr;
      curr = s[j];
      --j;
    }
    CACHE[i] = p;
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  solve();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << CACHE[n] << '\n';
  }
  return 0;
}
