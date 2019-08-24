/*
You are given two singly linked lists. The lists intersect at some node. Find,
and return the node. Note: the lists are non-cyclical.

Example:

A = 1 -> 2 -> 3 -> 4
B = 6 -> 3 -> 4

This should return 3 (you may assume that any nodes with the same value are the
same node).

Here is a starting point:

def intersection(a, b):
  # fill this in.

class Node(object):
  def __init__(self, val):
    self.val = val
    self.next = None
  def prettyPrint(self):
    c = self
    while c:
      print c.val,
      c = c.next

a = Node(1)
a.next = Node(2)
a.next.next = Node(3)
a.next.next.next = Node(4)

b = Node(6)
b.next = a.next.next

c = intersection(a, b)
c.prettyPrint()
# 3 4
*/

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
