#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *left, *right;
  Node(int x) {
    data = x;
    left = right = nullptr;
  }
};

void topView(Node *node) {
  queue<pair<Node *, int>> q;
  q.push(make_pair(node, 0));
  int mi = 1, ma = -1;
  vector<pair<int, int>> vec;
  while (!q.empty()) {
    Node *p = q.front().first;
    int l = q.front().second;
    q.pop();
    if (l < mi) {
      vec.push_back(make_pair(l - 1, p->data));
      mi = l;
    } else if (l > ma) {
      vec.push_back(make_pair(l + 1, p->data));
      ma = l;
    }
    if (p->left != nullptr) {
      q.push(make_pair(p->left, l - 1));
    }
    if (p->right != nullptr) {
      q.push(make_pair(p->right, l + 1));
    }
  }
  sort(vec.begin(), vec.end());
  for (auto i : vec) {
    cout << i.second << ' ';
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(4);
  root->left->left = new Node(4);
  root->left->right = new Node(9);
  root->right->left = new Node(1);
  root->right->right = new Node(2);
  root->right->right->left = new Node(55);
  topView(root);
  return 0;
}
