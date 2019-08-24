/*
You are given a 2D array of characters, and a target string. Return whether or
not the word target word exists in the matrix. Unlike a standard word search,
the word must be either going left-to-right, or top-to-bottom in the matrix.

Example:

[['F', 'A', 'C', 'I'],
 ['O', 'B', 'Q', 'P'],
 ['A', 'N', 'O', 'B'],
 ['M', 'A', 'S', 'S']]

Given this matrix, and the target word FOAM, you should return true, as it can
be found going up-to-down in the first column.

Here's the function signature:

def word_search(matrix, word):
  # Fill this in.

matrix = [
  ['F', 'A', 'C', 'I'],
  ['O', 'B', 'Q', 'P'],
  ['A', 'N', 'O', 'B'],
  ['M', 'A', 'S', 'S']]
print word_search(matrix, 'FOAM')
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
    char mat[n][n];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        cin >> mat[i][j];
      }
    }
    string s;
    bool f = false;
    cin >> s;
    for (int i = 0; i < n && !f; ++i) {
      for (int j = 0; j < n && !f; ++j) {
        int c = 0;
        int p = j;
        while (mat[i][p] == s[p] && p < n) {
          c++;
          p++;
        }
        if (c == s.size()) {
          f = 1;
        }
        c = 0;
        p = j;
        while (mat[p][i] == s[p] && p < n) {
          c++;
          p++;
        }
        if (c == s.size()) {
          f = 1;
        }
      }
    }
    cout << f << '\n';
  }
  return 0;
}
