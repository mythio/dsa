#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& primes) {
  int c = 0;
  int p = 2;
  while (c < 1201) {
    bool f = 1;
    for (int i = 2; i <= sqrt(p) && f; ++i) {
      if (p % i == 0) {
        f = 0;
      }
    }
    if (f) {
      ++c;
      primes.push_back(p);
    }
    ++p;
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  vector<int> primes;
  solve(primes);
  int n, q;
  cin >> n >> q;
  stack<int> a;
  vector<stack<int>> ans(q + 1);
  for (int i = 0; i < n; ++i) {
    int p;
    cin >> p;
    a.push(p);
  }
  for (int i = 0; i < q; ++i) {
    ans[q] = {};
    while (!a.empty()) {
      if (a.top() % primes[i] == 0) {
        ans[i].push(a.top());
      } else {
        ans[q].push(a.top());
      }
      a.pop();
    }
    a = ans[q];
  }
  for (auto i : ans) {
    while (!i.empty()) {
      cout << i.top() << '\n';
      i.pop();
    }
  }
  return 0;
}
