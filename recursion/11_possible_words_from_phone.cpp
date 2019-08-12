#include <bits/stdc++.h>
using namespace std;

string keys[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void possibleWords(string str, vector<int> num, int click) {
  if (click == num.size()) {
    cout << str << ' ';
    return;
  } else {
    for (int i = 0; i < keys[num[click] - 2].size(); ++i) {
      string temp = str + keys[num[click] - 2][i];
      possibleWords(temp, num, click + 1);
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
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i) {
      cin >> num[i];
    }
    possibleWords("", num, 0);
    cout << '\n';
  }
  return 0;
}
