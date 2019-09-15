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

void postorder(node *node) {
  if (node != nullptr) {
    postorder(node->left);
    postorder(node->right);
    cout << node->data << ' ';
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
  postorder(root);
  return 0;
}
