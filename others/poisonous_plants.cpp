#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  stack<vector<int>> st;
  int i = 0;
  while (i < n) {
    vector<int> p;
    p.push_back(a[i]);
    while (i + 1 < n && a[i] >= a[i + 1]) {
      p.push_back(a[i + 1]);
      ++i;
    }
    st.push(p);
    ++i;
  }
  while (!st.size() == 1) {
  }
}