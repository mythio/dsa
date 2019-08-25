/*
Imagine you are building a compiler. Before running any code, the compiler must
check that the parentheses in the program are balanced. Every opening bracket
must have a corresponding closing bracket. We can approximate this using
strings.

Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. An input string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.
- Note that an empty string is also considered valid.

Example:
Input: "((()))"
Output: True

Input: "[()]{}"
Output: True

Input: "({[)]"
Output: False
class Solution:
  def isValid(self, s):
    # Fill this in.

# Test Program
s = "()(){(())"
# should return False
print(Solution().isValid(s))

s = ""
# should return True
print(Solution().isValid(s))

s = "([{}])()"
# should return True
print(Solution().isValid(s))
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
    string s;
    cin >> s;
    stack<char> brackets;
    for (auto i : s) {
      if (i == '}' && !brackets.empty() && brackets.top() == '{') {
        brackets.pop();
      } else if (i == ']' && !brackets.empty() && brackets.top() == '[') {
        brackets.pop();
      } else if (i == ')' && !brackets.empty() && brackets.top() == '(') {
        brackets.pop();
      } else {
        brackets.push(i);
      }
    }
    cout << brackets.empty() << '\n';
  }
  return 0;
}
