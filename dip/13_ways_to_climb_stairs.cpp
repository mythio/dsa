/*
You are given a positive integer N which represents the number of steps in a
staircase. You can either climb 1 or 2 steps at a time. Write a function that
returns the number of unique ways to climb the stairs.

def staircase(n):
  # Fill this in.

print staircase(4)
# 5
print staircase(5)
# 8

Can you find a solution in O(n) time?
*/

#include <bits/stdc++.h>
using namespace std;

int dp[100000] = {0};

void cache() {
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i < 100000; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
}

int solve(int n) {
  if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 2;
  } else {
    return solve(n - 1) + solve(n - 2);
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cache();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << dp[n] << '\n';
  }
  return 0;
}
