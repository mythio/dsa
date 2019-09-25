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
    string s2 = s;
    int n = s.size();
    for (int i = n - 1; i > 0; --i) {
      if (s[i] > s[i - 1]) {
        swap(s[i], s[i - 1]);
        break;
      }
    }
    if (s2 == s) {
      cout << "no answer\n";
    } else {
      cout << s << '\n';
    }
  }
  return 0;
}
