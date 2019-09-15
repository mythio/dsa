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

bool isIdentical(node *node1, node *node2) {
  if (node1 == nullptr && node2 == nullptr) {
    return true;
  } else if (node1 != nullptr && node2 != nullptr) {
    if (node1->data == node2->data) {
      return isIdentical(node1->left, node2->left) &&
             isIdentical(node1->right, node2->right);
    }
  }
  return false;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  node *root1 = new node(1);
  root1->left = new node(2);
  root1->right = new node(4);
  root1->left->left = new node(4);
  root1->left->right = new node(9);
  root1->right->left = new node(1);
  root1->right->right = new node(2);

  node *root2 = new node(1);
  root2->left = new node(2);
  root2->right = new node(4);
  root2->left->left = new node(4);
  root2->left->right = new node(9);
  root2->right->right = new node(2);

  cout << isIdentical(root1, root2) << '\n';
  return 0;
}
