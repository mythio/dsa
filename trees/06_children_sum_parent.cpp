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

bool isChildrenSumParent(node *node) {
  if (node != nullptr) {
    if (node->left == nullptr && node->right == nullptr) {
      return true;
    }
    return node->data == (node->left != nullptr ? node->left->data : 0) +
                             (node->right != nullptr ? node->right->data : 0) &&
           isChildrenSumParent(node->left) && isChildrenSumParent(node->right);
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  node *root = new node(10);
  root->left = new node(8);
  root->right = new node(2);
  root->left->left = new node(5);
  root->left->right = new node(3);
  root->right->left = new node(2);
  cout << isChildrenSumParent(root) << '\n';
  return 0;
}
