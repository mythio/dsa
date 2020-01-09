#include <bits/stdc++.h>
using namespace std;

string base2(int n) {
  string ans = "";
  while (n) {
    if (n & 1) {
      ans = '1' + ans;
    } else {
      ans = '0' + ans;
    }
    n /= 2;
  }
  return ans;
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
    cout << base2(n) << '\n';
  }
  return 0;
}
