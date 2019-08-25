/*
You are given an array of integers in an arbitrary order. Return whether or not
it is possible to make the array non-decreasing by modifying at most 1 element
to any value.

We define an array is non-decreasing if array[i] <= array[i + 1] holds for every
i (1 <= i < n).

Example:

[13, 4, 7] should return true, since we can modify 13 to any value 4 or less, to
make it non-decreasing.

[13, 4, 1] however, should return false, since there is no way to modify just
one element to make the array non-decreasing.

Here is the function signature:

def check(lst):
  # Fill this in.

print check([13, 4, 7])
# True
print check([5,1,3,2,5])
# False

Can you find a solution in O(n) time?
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
    int p = -1;
    bool f = 0;
    for (int i = 0; i < n - 1; ++i) {
      if (a[i] > a[i + 1]) {
        if (p != -1) {
          break;
        }
        p = i;
      }
    }
    cout << (f && (p == -1 || p == 0 || p == n - 2 || a[p - 1] <= a[p + 1] ||
                   a[p] <= a[p + 2]))
         << '\n';
  }
  return 0;
}
