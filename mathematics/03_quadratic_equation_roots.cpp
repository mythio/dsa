#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    double d = (b * b - 4 * a * c);
    if (d == 0) {
      double x = (-b + sqrt(d)) / (2.0 * a);
      cout << x << ' ' << x << '\n';
    } else if (d > 0) {
      double x1 = (-b + sqrt(d)) / (2.0 * a);
      double x2 = (-b - sqrt(d)) / (2.0 * a);
      cout << x1 << ' ' << x2 << '\n';
    } else {
      cout << "Imaginary\n";
    }
  }
  return 0;
}
