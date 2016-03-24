#include <stack>
#include <iostream>	

struct Nodde {
  int key;
  Nodde *left;
  Nodde *right;
  Nodde *parent;
};

void insert(Nodde **root, Nodde *s);
void pr(Nodde *n);
void obr(Nodde *n);
void sim(Nodde *n);
void init(Nodde *n, int k);
