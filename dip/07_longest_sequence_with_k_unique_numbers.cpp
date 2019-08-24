/*
Given a sequence of numbers, find the longest sequence that contains only 2
unique numbers.

Example:
Input: [1, 3, 5, 3, 1, 3, 1, 5]
Output: 4
The longest sequence that contains just 2 unique numbers is [3, 1, 3, 1]

Here's the solution signature:

def findSequence(seq):
  # Fill this in.

print findSequence([1, 3, 5, 3, 1, 3, 1, 5])
# 4
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
    int l = 0;
    int res = 0;
    int dis = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; ++i) {
      if (map[a[i]] == 0) {
        ++dis;
      }
      ++map[a[i]];
      while (dis > k) {
        --map[a[l]];
        if (map[a[l]] == 0) {
          --dis;
        }
        l++;
      }
      res = max(res, i + 1 - l);
    }
    cout << res << '\n';
  }
  return 0;
}
