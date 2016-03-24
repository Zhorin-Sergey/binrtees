#include "tree.h"

void main() {
  Nodde root, a, b, c, d, e, f, g, h;
  init(&root, 6);
  init(&a, 2);
  init(&b, 8);
  init(&c, 0);
  init(&d, 1);
  init(&e, 4);
  init(&f, 5);
  init(&g, 7);
  init(&h, 9);
  Nodde *addr = &root;
  insert(&addr, &a);
  insert(&addr, &b);
  insert(&addr, &c);
  insert(&addr, &d);
  insert(&addr, &e);
  insert(&addr, &f);
  insert(&addr, &g);
  insert(&addr, &h);
  pr(addr);
  sim(addr);
  obr(addr);
  return;
}
