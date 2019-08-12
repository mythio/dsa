#include <bits/stdc++.h>
using namespace std;

int josephusSol(int n, int k) {
  if (n == 1) {
    return 1;
  } else {
    return (josephusSol(n - 1, k) + k - 1) % n + 1;
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
    cout << josephusSol(n, k) << '\n';
  }
  return 0;
}
