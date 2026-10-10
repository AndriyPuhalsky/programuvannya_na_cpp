#include <iostream>
using namespace std;

int main() {
  cout << "Введіть координати першої точки (х1 у1): ";
  int x1, y1;
  cin >> x1 >> y1;
  cout << "Введіть координати другої точки (х2 у2): ";
  int x2, y2;
  cin >> x2 >> y2;
  cout << "Введіть координати третьої точки (х3 у3): ";
  int x3, y3;
  cin >> x3 >> y3;
  double viznachnyk_1 = (x2 - x1) * (y3 - y1);
  double viznachnyk_2 = (x3 - x1) * (y2 - y1);
  if (viznachnyk_1 == viznachnyk_2) {
    cout << "Точки належать одній площині.";
  } else {
    cout << "Точки не належать одній площині.";
  }

  return 0;
}