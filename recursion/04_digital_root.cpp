#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
  if (n > 0) {
    return sumOfDigits(n / 10) + n % 10;
  }
  return 0;
}

int digitalRoot(int n) {
  if (n > 9) {
    return digitalRoot(sumOfDigits(n));
  }
  return n;
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
    cout << digitalRoot(n) << '\n';
  }
  return 0;
}
