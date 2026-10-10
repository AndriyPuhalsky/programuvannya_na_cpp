#include <iostream>
using namespace std;

int main() {
  cout << "Введіть суму балів від 1 до 100: ";
  int A;
  cin >> A;
  if (A <= 100 && A >= 1) {
    if (A <= 100 && A >= 90)
      cout << "Відмінно A";
    else if (A <= 89 && A >= 82)
      cout << "Добре B";
    else if (A <= 81 && A >= 74)
      cout << "Задовільно C";
    else if (A <= 73 && A >= 64)
      cout << "Задовільно D";
    else if (A <= 63 && A >= 60)
      cout << "Задовільно E";
    else if (A <= 59 && A >= 35)
      cout << "Незадовільно з можливістю перескладання FX";
    else if (A <= 34 && A >= 0)
      cout << "Незадовільно з обов'язковим повторним вивченням дисципліни F";

  } else
    cout << "Ви ввели невірне число " << '\n';

  return 0;
}