#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  long long n = 0;
  cin >> n;
  long long c1 = 0;
  for (auto i : s) {
    if (i == 'a') {
      ++c1;
    }
  }
  long long times = n / s.size();
  c1 *= times;
  long long rem = n % s.size();
  long long c2 = 0;
  for (int i = 0; i < rem; ++i) {
    if (s[i] == 'a') {
      ++c2;
    }
  }
  cout << c1 + c2 << '\n';
  return 0;
}
