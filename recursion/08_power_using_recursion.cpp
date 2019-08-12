#include <bits/stdc++.h>
using namespace std;

long long raisedToPower(int n, int p) {
  if (p == 0) {
    return 1;
  }
  return raisedToPower(n, p - 1) * n;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, p;
    cin >> n >> p;
    cout << raisedToPower(n, p) << '\n';
  }
  return 0;
}
