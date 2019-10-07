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

Node *lca(Node *node, int n1, int n2) {
  if (node == nullptr) {
    return nullptr;
  }
  if (node->data == n1 || node->data == n2) {
    return node;
  }
  Node *l = lca(node->left, n1, n2);
  Node *r = lca(node->right, n1, n2);
  if (l && r) {
    return node;
  }
  if (l) {
    return l;
  }
  if (r) {
    return r;
  }
  return nullptr;
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
  inorder(root);
  return 0;
}
