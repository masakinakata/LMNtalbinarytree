#include <bits/stdc++.h>

using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
};

Node *NIL;

void insert(int k, Node *root) {
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->parent = y;
  if (y == NIL) {
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

int main() {
  int n, x;
  string com;
  Node *root_even, *root_odd;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> com;
    if (com == "insert") {
      cin >> x;
      if (x % 2 == 0) insert(x,root_even);
      else insert(x, root_odd);
    } else {
      // should be implement of search and delete ... etc
    }
  }
  
  return 0;
}
