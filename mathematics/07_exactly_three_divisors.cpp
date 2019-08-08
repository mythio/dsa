#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

bool isExact3Div(int n) {
  int p = sqrt(n);
  if (n == p * p) {
    return true;
  }
  return false;
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
    int c = 0;
    for (int i = 2; i <= n; ++i) {
      if (isExact3Div(i) && isPrime(sqrt(i))) {
        ++c;
      }
    }
    cout << c << '\n';
  }
  return 0;
}
