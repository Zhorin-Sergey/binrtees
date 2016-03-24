#include "tree.h"
#include <gtest.h>

TEST(Print, can_insert) {
  Nodde root, a;
  init(&root, 6);
  init(&a, 2);
  Nodde *addr = &root;
  insert(&addr, &a);
  EXPECT_EQ(root.left, &a);
}
