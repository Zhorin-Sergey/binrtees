#include "tree.h"

void insert(Nodde **root, Nodde *s) {
  if (*root == 0) {
    *root = s;
    return;
  }
  Nodde *x = *root;
  Nodde *y = *root;
  while (x != 0) {
    y = x;
    if (s->key >= x->key)
      x = x->right;
    else
      x = x->left;
  }
  s->parent = y;
  if (s->key >= y->key)
    y->right = s;
  else
    y->left = s;
  return;
}

void pr(Nodde *n) {
  std::stack <Nodde*> st;
  st.push(n);
  while (!st.empty()) {
    Nodde *tmp = st.top();
    st.pop();
    std::cout << tmp->key << " ";
    if (tmp->right != 0)
      st.push(tmp->right);
    if (tmp->left != 0)
      st.push(tmp->left);
  }
  std::cout << std::endl;
}

void sim(Nodde *n) {
  std::stack <Nodde*> st;
  Nodde *tmp = n;
  while (!st.empty() || tmp != 0) {
    if (tmp != 0) {
      st.push(tmp);
      tmp = tmp->left;
    } else {
      tmp = st.top();
      st.pop();
      std::cout << tmp->key << " ";
      tmp = tmp->right;
    }
  }
  std::cout << std::endl;
}

void obr(Nodde *n) {
  std::stack <Nodde*> st;
  Nodde *tmp = n;
  Nodde *tmp1 = 0;
  Nodde *lnp = 0;
  while (!st.empty() || tmp != 0) {
    if (tmp != 0) {
      st.push(tmp);
      tmp = tmp->left;
    } else {
      tmp1 = st.top();
      if (tmp1->right != 0 && lnp != tmp1->right) {
        tmp = tmp1->right;
      } else {
        st.pop();
        std::cout << tmp1->key << " ";
        lnp = tmp1;
      }
    }
  }
  std::cout << std::endl;
}

void init(Nodde *n, int k) {
  n->key = k;
  n->left = 0;
  n->parent = 0;
  n->right = 0;
  return;
}
