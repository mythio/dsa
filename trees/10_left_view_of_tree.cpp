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

void leftView(Node *node) {
  queue<pair<Node *, int>> q;
  q.push(make_pair(node, 0));
  int prev = -1;
  while (!q.empty()) {
    Node *p = q.front().first;
    int l = q.front().second;
    q.pop();
    if (prev != l) {
      cout << p->data << ' ';
      prev = l;
    }
    if (p->left != nullptr) {
      q.push(make_pair(p->left, l + 1));
    }
    if (p->right != nullptr) {
      q.push(make_pair(p->right, l + 1));
    }
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
  leftView(root);
  return 0;
}
