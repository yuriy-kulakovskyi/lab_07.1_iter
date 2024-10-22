#include <gtest/gtest.h>
#include "../include/main.h"

TEST(CalcTest, PositiveValues) {
  const int rowCount = 3;
  const int colCount = 3;
  int** a = new int*[rowCount];
  for (int i = 0; i < rowCount; ++i) {
    a[i] = new int[colCount];
  }

  a[0][0] = 1; a[0][1] = 2; a[0][2] = 3;
  a[1][0] = 4; a[1][1] = 5; a[1][2] = 6;
  a[2][0] = 7; a[2][1] = 8; a[2][2] = 9;

  int S = 0;
  int k = 0;

  Calc(a, rowCount, colCount, S, k);

  EXPECT_EQ(S, 28);
  EXPECT_EQ(k, 4);
  EXPECT_EQ(a[1][1], 0);
  EXPECT_EQ(a[2][1], 0);

  for (int i = 0; i < rowCount; ++i) {
    delete[] a[i];
  }
  delete[] a;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}