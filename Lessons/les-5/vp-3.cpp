#include <iostream>
using namespace std;
int main() {
  int a[10][10], i, j, n = 3;
  int *p[10];
  int **dp = p; // те саме, що і dp=&p[0];
  for (i = 0; i < n; ++i) {
    p[i] = a[i]; // p[i] це поінтер для i-го рядка a[i];
  }
  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j) {
      cin >> *(*(dp + i) + j); //(*(dp+i)+j) це поінтер для a[i][j];
    }
  }

  return 0;
}