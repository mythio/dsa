/*
Given a list of numbers, find if there exists a pythagorean triplet in that
list. A pythagorean triplet is 3 variables a, b, c where a^2 + b^2 = c^2

Example:
Input: [3, 5, 12, 5, 13]
Output: True
Here, 5^2 + 12^2 = 13^2.

def findPythagoreanTriplets(nums):
  # Fill this in.

print findPythagoreanTriplets([3, 12, 5, 13])
# True
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
    int n;
    cin >> n;
    unordered_set<int> set(n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      set.insert(a[i] * a[i]);
    }
    bool f = 0;
    for (int i = 0; i < n && !f; ++i) {
      for (int j = i + 1; j < n && !f; ++j) {
        if (set.find(a[i] * a[i] + a[j] * a[j]) != set.end()) {
          f = 1;
        }
      }
    }
    cout << f << '\n';
  }
  return 0;
}
