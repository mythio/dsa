#include <bits/stdc++.h>
using namespace std;

struct hash_pair {
  template <class T1, class T2>
  size_t operator()(const pair<T1, T2>& p) const {
    auto hash1 = hash<T1>{}(p.first);
    auto hash2 = hash<T2>{}(p.second);
    return hash1 ^ hash2;
  }
};

int main(int argc, char const* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    unordered_map<pair<int, int>, int, hash_pair> a;
    for (int i = 0; i < n; ++i) {
      string s;
      cin >> s;
      a[make_pair(s[0], s[s.size() - 1])] = i;
    }
    char x1, x2;
    cin >> x1 >> x2;
    cout << a[make_pair(x1, x2)] << '\n';
  }
  return 0;
}
