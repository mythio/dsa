#include <bits/stdc++.h>
using namespace std;

class node {
 public:
  node(int n) { data = n; }
  int data;
  node *next;
};

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    node *head1 = NULL;
    node *head2 = NULL;
    head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(3);
    head1->next->next->next = new node(4);
    head2 = new node(6);
    head2->next = head1->next->next;

    unordered_set<int> hash;
    while (head1) {
      hash.insert(head1->data);
      head1 = head1->next;
    }
    while (head2) {
      if (hash.find(head2->data) != hash.end()) {
        cout << head2->data << '\n';
        break;
      }
      head2 = head2->next;
    }
  }
  return 0;
}
