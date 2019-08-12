#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int b, int e) {
  if (b == e) {
    return true;
  } else if (s[b] != s[e]) {
    return false;
  } else if (b < e + 1) {
    return isPalindrome(s, b + 1, e - 1);
  } else {
    return true;
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
    cout << (isPalindrome(s, 0, s.size() - 1) ? "yes\n" : "no\n");
  }
  return 0;
}
