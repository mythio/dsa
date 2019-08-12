#include <bits/stdc++.h>
using namespace std;

void solve(string str, vector<char> a, int pos, int k, vector<string> &res) {
  if (pos == k) {
    res.push_back(str);
    return;
  } else {
    for (int i = 0; i < a.size(); ++i) {
      string temp = str + a[i];
      solve(temp, a, pos + 1, k, res);
    }
  }
}

void printAll(vector<char> a, int k) {
  vector<string> res;
  solve("", a, 0, k, res);
  sort(res.begin(), res.end());
  for (string i : res) {
    cout << i << ' ';
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<char> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    printAll(a, k);
    cout << '\n';
  }
  return 0;
}
