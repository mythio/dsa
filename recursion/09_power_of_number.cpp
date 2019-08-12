#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int rev(int n) {
  int r = 0;
  while (n > 0) {
    r = r * 10 + n % 10;
    n /= 10;
  }
  return r;
}

long long power(int n, int p) {
  if (p == 0) {
    return 1L;
  } else {
    if (p % 2 == 0) {
      long long res = power(n, p / 2) % mod;
      res = ((res % mod) * (res % mod)) % mod;
      return res;
    } else {
      long long res = power(n, p - 1) % mod;
      res = ((res % mod) * (n % mod)) % mod;
      return res;
    }
  }
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
    int p = rev(n);
    cout << power(n, p) << '\n';
  }
  return 0;
}
