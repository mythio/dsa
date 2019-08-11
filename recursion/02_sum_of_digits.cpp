#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
  if (n > 0) {
    return n % 10 + sumOfDigits(n / 10);
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << sumOfDigits(n) << '\n';
  }
  return 0;
}
