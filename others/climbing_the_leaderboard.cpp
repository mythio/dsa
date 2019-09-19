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
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  vector<int> rank(n);
  rank[0] = 1;
  for (int i = 1; i < n; ++i) {
    if (a[i] == a[i - 1]) {
      rank[i] = rank[i - 1];
    } else {
      rank[i] = rank[i - 1] + 1;
    }
  }
  for (int i = 0; i < m; ++i) {
    int lo = 0;
    int hi = n - 1;
    int key = b[i];
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (a[mid] == key) {
        cout << rank[mid] << '\n';
        break;
      } else if (a[mid] < key && mid == 0) {
        cout << rank[mid] << '\n';
        break;
      } else if (a[mid] > key && mid == n - 1) {
        cout << rank[mid] + 1 << '\n';
        break;
      } else if (a[mid] < key && key < a[mid - 1]) {
        cout << rank[mid] << '\n';
        break;
      } else if (a[mid] > key && key >= a[mid + 1]) {
        cout << rank[mid + 1] << '\n';
        break;
      } else if (a[mid] < key) {
        hi = mid - 1;
      } else if (a[mid] > key) {
        lo = mid + 1;
      }
    }
  }
  return 0;
}
