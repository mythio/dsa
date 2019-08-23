#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string binN;
    string grayR;
    while (n) {
      binN = (char)('0' + (n & 1)) + binN;
      n >>= 1;
    }
    grayR = binN[0];
    for (int i = 1; i < binN.size(); ++i) {
      grayR = (char)('0' + ((binN[i] - '0') ^ (binN[i - 1] - '0'))) + grayR;
    }
    int ans = 0;
    for (int i = 0; i < grayR.size(); ++i) {
      ans += pow(2, i) * (grayR[i] - '0');
    }
    cout << ans << '\n';
  }
  return 0;
}
