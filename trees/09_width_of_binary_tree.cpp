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

int width(node *root) {
  queue<node *> q;
  q.push(root);
  int ans = 0;
  while (!q.empty()) {
    queue<node *> temp = q;
    int c = 0;
    while (!q.empty()) {
      c++;
      q.pop();
    }
    while (!temp.empty()) {
      if (temp.front()->left != nullptr) {
        q.push(temp.front()->left);
      }
      if (temp.front()->right != nullptr) {
        q.push(temp.front()->right);
      }
      temp.pop();
    }
    ans = max(ans, c);
  }
  return ans;
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
  cout << width(root) << '\n';
  return 0;
}
