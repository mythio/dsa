/*
Given an array with n objects colored red, white or blue, sort them in-place so
that objects of the same color are adjacent, with the colors in the order red,
white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white,
and blue respectively.

Note: You are not suppose to use the library’s sort function for this problem.

Can you do this in a single pass?
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
    int a0 = 0, a1 = 0, a2 = 0;
    for (auto i : a) {
      if (i == 0) {
        ++a0;
      } else if (i == 1) {
        ++a1;
      } else {
        ++a2;
      }
    }
    int i = 0;
    while (a0--) {
      a[i++] = 0;
    }
    while (a1--) {
      a[i++] = 1;
    }
    while (a2--) {
      a[i++] = 2;
    }
    for (auto i : a) {
      cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}
