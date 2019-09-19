#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, q;
  cin >> n >> q;
  map<int, vector<int>> map;
  int lastAnswer = 0;
  while (q--) {
    int a, x, y;
    cin >> a >> x >> y;
    int seq = (x ^ lastAnswer) % n;
    if (a == 1) {
      map[seq].push_back(y);
    } else {
      lastAnswer = map[seq][y % map[seq].size()];
      cout << lastAnswer << '\n';
    }
  }
  return 0;
}
