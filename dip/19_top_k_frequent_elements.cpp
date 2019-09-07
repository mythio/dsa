#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.second > b.second; }

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    unordered_map<int, int> map;
    for (auto i : a) {
      ++map[i];
    }
    vector<pair<int, int>> s_map;
    for (auto i : map) {
      s_map.push_back(i);
    }
    sort(s_map.begin(), s_map.end(), cmp);
    vector<int> ans(k);
    for (int i = 0; i < k; ++i) {
      cout << s_map[i].first << ' ';
    }
    cout << '\n';
  }
  return 0;
}
