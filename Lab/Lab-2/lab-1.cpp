#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << "Введіть змінну А: " << '\n';
  double A;
  double Y;
  cin >> A;
  if (A < -2) {
    Y = sin(A) + fabs(A);
  } else if (A >= -2) {
    Y = sqrt(pow(A, 3.0));
  }

  cout << "Результат: " << Y << '\n';
  return 0;
}