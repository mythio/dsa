#include <bits/stdc++.h>
using namespace std;

void count(int n) {
  if (n > 0) {
    cout << n << ' ';
    count(n - 1);
    return;
  }
  return;
}

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    count(n);
    cout << '\n';
  }
  return 0;
}
