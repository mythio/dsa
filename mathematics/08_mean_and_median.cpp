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
    vector<int> a(n);
    int s = 0;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      s += a[i];
    }
    sort (a.begin(), a.end());
    cout << s/n << ' ' << a[(n-1) / 2] << '\n';
  }
  return 0;
}
