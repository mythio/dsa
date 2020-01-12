#include <bits/stdc++.h>
using namespace std;

int closestInd(vector<int> a, int k) {
  int minDiff = INT_MAX;
  int closest;
  int l = 0, r = a.size() - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    int cand = a[m];
    if (abs(cand - k) < minDiff) {
      minDiff = abs(cand - k);
      closest = m;
    }
    if (a[m] == k) {
      return m;
    } else if (a[m] > k) {
      r = m - 1;
    } else {
      l = m + 1;
    }
  }
  return closest;
}

void kNearestElements(vector<int> a, int k, int x) {
  int c = closestInd(a, x);
  int n = a.size();
  int l = c, r = c;
  while (r - l + 1 < k && l > 0 && r < n - 1) {
    if (abs(a[l - 1] - x) <= abs(a[r + 1] - x)) {
      --l;
    } else {
      ++r;
    }
  }
  while (r - l + 1 < k && l == 0) {
    r++;
  }
  while (r - l + 1 < k && r == n - 1) {
    l--;
  }
  for (int i = l; i <= r; ++i) {
    cout << a[i] << ' ';
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
    int k, x;
    cin >> k >> x;
    kNearestElements(a, k, x);
  }
  return 0;
}
