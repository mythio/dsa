#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    int mi = INT_MAX;
    int ma = -1;
    for (int i = 0; i < n; ++i) {
      cin >> l[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> r[i];
    }
    vector<int> arr(100000);
    for (int i = 0; i < n; ++i) {
      ++arr[l[i]];
      --arr[r[i] + 1];
      mi = min(mi, l[i]);
      ma = max(ma, r[i] + 1);
    }
    int pos = 0;
    int maV = -1;
    for (int i = 0; i < ma; ++i) {
      arr[i] += arr[i-1];
      if (arr[i] > maV) {
        pos = i;
      }
    }
    cout << pos << '\n';
  }
  return 0;
}