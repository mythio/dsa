#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
  if (n > 0) {
    return 1 + countDigits(n / 10);
  }
  return 0;
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
    cout << countDigits(n) << '\n';
  }
  return 0;
}
