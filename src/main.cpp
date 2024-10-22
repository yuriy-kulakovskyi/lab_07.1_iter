#include <iostream>
#include <time.h>
#include "../include/main.h"

using namespace std;

int main()
{
  srand((unsigned)time(NULL));

  int Low = -6;
  int High = 31;
  int rowCount = 7;
  int colCount = 5;

  int **r = new int*[rowCount];
  for (int i=0; i<rowCount; i++)
    r[i] = new int[colCount];

  Create(r, rowCount, colCount, Low, High);
  Print(r, rowCount, colCount);
  Sort(r, rowCount, colCount);
  Print(r, rowCount, colCount);

  int S=0;
  int k=0;

  Calc(r, rowCount, colCount, S, k);

  cout << "S = " << S << endl;
  cout << "k = " << k << endl;
  Print(r, rowCount, colCount);

  for (int i=0; i<rowCount; i++)
    delete [] r[i];
  delete [] r;

  return 0;
}