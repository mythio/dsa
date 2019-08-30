#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> a, int b, int e, int k) {
  if (b >= e) {
    return -1;
  } else {
    int m = (b + e) / 2;
    if (a[m] <= k) {
      return solve(a, m + 1, e, k);
    } else {
      return solve(a, b, m - 1, k);
    }
  }
}

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
    cout << solve(a, 0, n - 1, k) << '\n';
  }
  return 0;
}