#include <cmath>
#include <iostream>
using namespace std;

int main() {
  float a;
  cout << "Об'єм = площа ребра піднесена до третього ступеня" << '\n'
       << "Введіть площу ребра = ";
  cin >> a;
  float V = pow(a, 3);
  cout << "Об'єм = " << V << '\n';

  cout << "Повна площа поверхні куба складається з площ його 6 однакових "
          "квадратних граней: S=6·a² "
       << '\n'
       << "Введіть площу = ";
  cin >> a;
  float S = 6 * pow(a, 2);
  cout << "Повна площа поверхні = " << S << '\n';

  return 0;
}