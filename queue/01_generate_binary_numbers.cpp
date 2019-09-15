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
    queue<string> q;
    q.push("1");
    while (n--) {
      string s = q.front();
      q.pop();
      q.push(s + "0");
      q.push(s + "1");
      cout << s << ' ';
    }
    cout << '\n';
  }
  return 0;
}
