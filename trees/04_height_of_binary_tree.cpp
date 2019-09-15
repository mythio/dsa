#include <bits/stdc++.h>
using namespace std;

struct node {
  int data;
  node *left, *right;
  node(int x) {
    data = x;
    left = right = nullptr;
  }
};

int height(node *node) {
  if (node != nullptr) {
    return 1 + max(height(node->left), height(node->right));
  }
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  node *root = new node(1);
  root->left = new node(2);
  root->right = new node(4);
  root->left->left = new node(4);
  root->left->right = new node(9);
  root->right->left = new node(1);
  root->right->right = new node(2);
  cout << height(root) << '\n';
  return 0;
}
