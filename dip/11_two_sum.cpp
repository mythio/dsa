/*
You are given a list of numbers, and a target number k. Return whether or not
there are two numbers in the list that add up to k.

Example:
Given [4, 7, 1 , -3, 2] and k = 5,
return true since 4 + 1 = 5.

def two_sum(list, k):
  # Fill this in.

print two_sum([4,7,1,-3,2], 5)
# True

Try to do it in a single pass of the list.
*/

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
    bool f = 0;
    unordered_map<int, bool> map;
    for (auto i : a) {
      map[i] = 1;
      if (map[k - i] == 1) {
        f = 1;
        break;
      }
    }
    cout << f << '\n';
  }
  return 0;
}
