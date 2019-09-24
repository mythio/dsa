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
  int f = 1;
  while (f) {
    sort(a.begin(), a.end());
    int c = 0;
    int cut = a[0];
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] >= cut) {
        a[i] -= cut;
        c++;
      }
    }
    cout << c << '\n';
    f = 0;
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] == 0) {
        a.erase(a.begin() + i);
        i--;
      }
      if (a[i]) {
        f = 1;
        break;
      }
    }
  }
}
