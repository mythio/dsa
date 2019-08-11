#include <bits/stdc++.h>
using namespace std;

void count(int n) {
  if (n > 0) {
    count(n - 1);
    cout << n << ' ';
    return;
  }
  return;
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
    count(n);
    cout << '\n';
  }
  return 0;
}
