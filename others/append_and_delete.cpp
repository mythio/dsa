#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s, t;
  int k;
  cin >> s >> t;
  cin >> k;
  int i = 0;
  while (i < min(s.size(), t.size())) {
    if (s[i] != t[i]) {
      break;
    }
    ++i;
  }
  if (k < s.size() + t.size() - 2 * i) {
    cout << "No\n";
  } else if (k % 2 == (s.size() + t.size() - 2 * i)) {
    cout << "Yes\n";
  } else if (k > s.size() + t.size()) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}