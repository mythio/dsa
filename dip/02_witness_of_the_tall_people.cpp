/*
There are n people lined up, and each have a height represented as an integer. A
murder has happened right in front of them, and only people who are taller than
everyone in front of them are able to see what has happened. How many witnesses
are there?

Example:
Input: [3, 6, 3, 4, 1]
Output: 3
Explanation: Only [6, 4, 1] were able to see in front of them.
 #
 #
 # #
####
####
#####
36341                                 x (murder scene)
Here's your starting point:

def witnesses(heights):
  # Fill this in.

print witnesses([3, 6, 3, 4, 1])
# 3
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
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    int c = 0;
    int m = -1;
    for (int i = n - 1; i >= 0; --i) {
      if (m < a[i]) {
        m = a[i];
        ++c;
      }
    }
    cout << c << '\n';
  }
  return 0;
}
