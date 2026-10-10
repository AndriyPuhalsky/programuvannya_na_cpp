#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double a, b, c;
  cout << "Обчислюємо гіпотенузу прямокутного трикутника та його периметр "
       << '\n'
       << "Введіть сторону a ";
  cin >> a;
  cout << "Введіть сторону b ";
  cin >> b;
  c = sqrt(pow(a, 2) + pow(b, 2));
  cout << "Гіпотенуза = " << c << '\n';
  cout << "Периметр = " << a + b + c << '\n';

  return 0;
}