#ifndef MAIN_H
#define MAIN_H

void Create(int** a, const int rowCount, const int colCount, const int Low, const int High);
void Print(int** a, const int rowCount, const int colCount);
void Sort(int** a, const int rowCount, const int colCount);
void Change(int** a, const int col1, const int col2, const int colCount);
void Calc(int** a, const int rowCount, const int colCount, int& S, int& k);

#endif //MAIN_H
