#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> a(k, 0);
  int i = 0;
  int ans = 1;
  while (n > 0) {
    n -= ans;
    if (n < 0) {
      a[i % k] += n + ans;
    } else {
      a[i % k] += ans;
    }
    ++ans;
    ++i;
  }
  for (auto i : a) {
    cout << i << ' ';
  }
  return 0;
}
