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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << digitalRoot(n) << '\n';
  }
  return 0;
}
