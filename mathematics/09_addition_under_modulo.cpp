#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << ((a % mod) + (b % mod)) % mod << '\n';
  }
  return 0;
}
