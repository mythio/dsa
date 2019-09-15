#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    deque<int> dq;
    int i = 0;
    for (; i < k; ++i) {
      if (!dq.empty() && a[dq.back()] <= a[i]) {
        dq.pop_back();
      }
      dq.push_back(i);
    }
    for (; i < n; ++i) {
      cout << a[dq.front()] << ' ';
      while (!dq.empty() && dq.front() <= i - k) {
        dq.pop_front();
      }
      while (!dq.empty() && a[i] >= a[dq.front()]) {
        dq.pop_back();
      }
      dq.push_back(i);
    }
    cout << a[dq.front()];
    cout << '\n';
    dq.pop_front();
  }
  return 0;
}
