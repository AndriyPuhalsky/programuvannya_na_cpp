#include <iostream>
using namespace std;

int main() {
  double rozhid, vartyst_palyve, vidstan;
  cout << "Введіть розхід на 100 км в літрах: ";
  cin >> rozhid;
  cout << "Введіть вартість пального за 1 літр в гривнях: ";
  cin >> vartyst_palyve;
  cout << "Введіть відстань на дачу в км: ";
  cin >> vidstan;
  double palne_kilkist = (vidstan / 100) * rozhid;
  double vartist_palyva = palne_kilkist * vartyst_palyve;
  cout << "Загальна вартість поїздки в одну сторону: " << vartist_palyva
       << endl;
  return 0;
}
