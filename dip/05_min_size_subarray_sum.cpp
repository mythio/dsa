/*
Given an array of n positive integers and a positive integer s, find the minimal
length of a contiguous subarray of which the sum ≥ s. If there isn't one, return
0 instead.

Example:
Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: the subarray [4,3] has the minimal length under the problem
constraint.

Here is the method signature:

class Solution:
  def minSubArrayLen(self, nums, s):
    # Fill this in

print Solution().minSubArrayLen([2, 3, 1, 2, 4, 3], 7)
# 2
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
    int res = INT_MAX;
    int l = 0;
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
      sum += a[i];
      while (sum >= k) {
        res = min(res, i + 1 - l);
        sum -= a[l++];
      }
    }
    cout << (res != INT_MAX ? res : 0) << '\n';
  }
  return 0;
}
