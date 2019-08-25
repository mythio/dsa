/*
Given a sorted array, A, with possibly duplicated elements, find the indices of
the first and last occurrences of a target element, x. Return -1 if the target
is not found.

Example:
Input: A = [1,3,3,5,7,8,9,9,9,15], target = 9
Output: [6,8]

Input: A = [100, 150, 150, 153], target = 150
Output: [1,2]

Input: A = [1,2,3,4,5,6,10], target = 9
Output: [-1, -1]
Here is a function signature example:

class Solution:
  def getRange(self, arr, target):
    # Fill this in.

# Test program
arr = [1, 2, 2, 2, 2, 3, 4, 7, 8, 8]
x = 2
print(Solution().getRange(arr, x))
# [1, 4]
*/

#include <bits/stdc++.h>
using namespace std;

int lower(vector<int> a, int b, int e, int k) {
  if (b >= e) {
    return b;
  } else {
    int m = (b + e) / 2;
    if (a[m] >= k) {
      return lower(a, b, m, k);
    } else {
      return lower(a, m + 1, e, k);
    }
  }
}

int upper(vector<int> a, int b, int e, int k) {
  if (b >= e) {
    return b;
  } else {
    int m = (b + e) / 2;
    if (a[m] <= k) {
      return upper(a, m + 1, e, k);
    } else {
      return upper(a, b, m, k);
    }
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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int p = lower(a, 0, n - 1, k);
    auto u = upper(a, 0, n - 1, k);
    cout << p << ' ' << u - 1 << '\n';
  }
  return 0;
}
