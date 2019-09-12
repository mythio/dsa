/*
You are given a string s, and an integer k. Return the length of the longest
substring in s that contains at most k distinct characters.

For instance, given the string:
aabcdefff and k = 3, then the longest substring with 3 distinct characters would
be defff. The answer should be 5.

Here's a starting point:

def longest_substring_with_k_distinct_characters(s, k):
  # Fill this in.

print longest_substring_with_k_distinct_characters('aabcdefff', 3)
# 5 (because 'defff' has length 5 with 3 characters)
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
    string s;
    cin >> s;
    int p = 0;
    int ans = 0;
    unordered_map<char, int> map;
    for (int i = 0; i < n; i++) {
      ++map[s[i]];
      if (map.size() == k) {
        ans = max(ans, i - p + 1);
      } else if (map.size() > k) {
        --map[s[p]];
        if (map[s[p]] == 0) {
          map.erase(s[p]);
          ans = max(ans, i - p);
        }
        p++;
      }
    }
    if (ans == 0) {
      cout << -1 << endl;
    } else
      cout << ans << endl;
  }
  return 0;
}
