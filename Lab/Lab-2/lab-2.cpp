#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << "Введіть змінну А: " << '\n';
  double A;
  double Y;
  cin >> A;
  if (A < -10)
    Y = 3 * pow(A, 2) - pow(A, 3);
  else if (A >= -10 && A <= 10)
    Y = sqrt(A - 2 * pow(A, 2));
  else
    Y = cos(A - 3);

  cout << "Результат: " << Y << '\n';
  return 0;
}