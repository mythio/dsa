#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, vector<int> subset, int pos, set<vector<int>> &res) {
  if (a.size() == pos) {
    res.insert(subset);
    return;
  } else {
    solve(a, subset, pos + 1, res);
    subset.push_back(a[pos]);
    solve(a, subset, pos + 1, res);
  }
}

void subsets(vector<int> a) {
  set<vector<int>> res;
  vector<int> subset;
  solve(a, subset, 0, res);
  vector<vector<int>> ans;
  for (auto i : res) {
    ans.push_back(i);
  }
  for (int i = 0; i < ans.size(); ++i) {
    cout << "(";
    for (int j = 0; j < ans[i].size(); ++j) {
      cout << ans[i][j];
      if (j != ans[i].size() - 1) {
        cout << ' ';
      }
    }
    cout << ")";
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    subsets(a);
    cout << '\n';
  }
  return 0;
}
