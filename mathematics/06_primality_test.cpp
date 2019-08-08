#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
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
    if (isPrime(n)) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}
