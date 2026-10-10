#include <iostream>
using namespace std;

int main() {
  float a, b, c;
  cout << "Об'єм паралелепіпеді = сума всіх його сторін " << '\n'
       << "Введіть площу сторін по черзі = ";
  cin >> a >> b >> c;
  float V = a * b * c;
  cout << "Об'єм = " << V << '\n';

  cout
      << "Повна площа поверхні прямокутного паралелепіпеда (S=2·(a·b+b·c+a·c)) "
      << '\n';
  float S = 2 * (a * b + b * c + a * c);
  cout << "Повна площа поверхні = " << S << '\n';

  return 0;
}