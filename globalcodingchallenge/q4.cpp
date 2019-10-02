#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> score(m);
    vector<int> rank(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
      cin >> score[i];
    }
    rank[0] = 1;
    for (int i = 1; i < n; ++i) {
      if (a[i] == a[i - 1]) {
        rank[i] = rank[i - 1];
      } else {
        rank[i] = rank[i - 1] + 1;
      }
    }
    unordered_map<int, int> ans;
    for (int i = 0; i < m; ++i) {
      int lo = 0;
      int hi = n - 1;
      int key = score[i];
      while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) {
          ++ans[rank[mid]];
          break;
        } else if (a[mid] < key && mid == 0) {
          ++ans[rank[mid]];
          break;
        } else if (a[mid] > key && mid == n - 1) {
          ++ans[rank[mid] + 1];
          break;
        } else if (a[mid] < key && key < a[mid - 1]) {
          ++ans[rank[mid]];
          break;
        } else if (a[mid] > key && key >= a[mid + 1]) {
          ++ans[rank[mid + 1]];
          break;
        } else if (a[mid] < key) {
          hi = mid - 1;
        } else if (a[mid] > key) {
          lo = mid + 1;
        }
      }
    }
    int res = 0, ma = 0;
    for (auto i : ans) {
      if (ma < i.second) {
        ma = i.second;
        res = i.first;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
