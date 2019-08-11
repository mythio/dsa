#include <bits/stdc++.h>
using namespace std;

void solveTower(int n, char from, char to, char aux, int &moves) {
  if (n == 1) {
    cout << "move disk " << n << " from rod " << from << " to rod " << to
         << '\n';
    ++moves;
  } else {
    solveTower(n - 1, from, aux, to, moves);
    cout << "move disk " << n << " from rod " << from << " to rod " << to
         << '\n';
    solveTower(n - 1, aux, to, from, moves);
    ++moves;
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
    int moves = 0;
    solveTower(n, 'A', 'C', 'B', moves);
    cout << "number of moves: " << moves << '\n';
  }
  return 0;
}
