#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  unordered_map<int, int> res;
  for (auto i : a) {
    ++res[i];
  }
  int ans = 0;
  for (auto i : res) {
    ans = max(ans, i.second);
  }
  cout << n - ans << '\n';
  return 0;
}
