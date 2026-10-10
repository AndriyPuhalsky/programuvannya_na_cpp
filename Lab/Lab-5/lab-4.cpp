#include <iostream>
using namespace std;

int main() {
  double MTC_tarif = 0.35, Kyivstar_tarif = 0.39, life_tarif = 0.30;
  int num_minutes;
  cout << "Введіть кількість хвилин: ";
  cin >> num_minutes;
  cout << "Оберіть оператора цифрою:" << "\n"
       << "1 - MTC (0.35 грн/хв)" << "\n"
       << "2 - Kyivstar (0.39 грн/хв)" << "\n"
       << "3 - life (0.30 грн/хв)" << "\n";
  int operator_id;
  cin >> operator_id;
  switch (operator_id) {
  case 1:
    cout << "Вартість дзвінка абоненту MTC: " << num_minutes * MTC_tarif
         << " грн" << endl;
    break;
  case 2:
    cout << "Вартість дзвінка абоненту Kyivstar: "
         << num_minutes * Kyivstar_tarif << " грн" << endl;
    break;
  case 3:
    cout << "Вартість дзвінка абоненту life: " << num_minutes * life_tarif
         << " грн" << endl;
    break;
  default:
    cout << "Неправильний оператор" << endl;
  }

  return 0;
}