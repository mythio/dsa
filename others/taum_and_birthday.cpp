#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int b, w;
    cin >> b >> w;
    int bc, wc, z;
    cin >> bc >> wc >> z;
    int ans =
        min({b * bc + w * wc, (b + w) * bc - w * z, (b + w) * wc - b * z});
    cout << ans << '\n';
  }
  return 0;
}
