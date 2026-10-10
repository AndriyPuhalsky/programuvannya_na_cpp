#include <cmath>
#include <iostream>

using namespace std;

// Функція для обчислення відстані між двома точками
double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
  double x1, y1, x2, y2, x3, y3;

  cout << "Введіть координати першої вершини (x1, y1): ";
  cin >> x1 >> y1;

  cout << "Введіть координати другої вершини (x2, y2): ";
  cin >> x2 >> y2;

  cout << "Введіть координати третьої вершини (x3, y3): ";
  cin >> x3 >> y3;

  // Обчислення довжин сторін трикутника
  double a = distance(x1, y1, x2, y2);
  double b = distance(x2, y2, x3, y3);
  double c = distance(x3, y3, x1, y1);

  double perimeter = a + b + c;

  double p = perimeter / 2.0;
  double area = sqrt(p * (p - a) * (p - b) * (p - c));

  cout << "Периметр трикутника: " << perimeter << endl;
  cout << "Площа трикутника: " << area << endl;

  return 0;
}
