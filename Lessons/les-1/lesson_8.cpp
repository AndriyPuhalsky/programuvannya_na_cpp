#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  float m[1000], min;
  int i, n;
  cout << "n = ";
  cin >> n;
  for (i = 0; i < n; i++) {
    m[i] = (rand() % 81 + 30) / 10;
    cout << m[i] << "   ";
  }
  min = m[0];
  for (i = 1; i < n; i++) {
    if (m[i] < min)
      min = m[i];
  }
  cout << "min = " << min << "\n";
  return 0;
}