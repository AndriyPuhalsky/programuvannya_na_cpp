#include <iostream>
using namespace std;

int main() {
  int chislo;
  cout << "Введіть трьохзначне число, приклад 123: ";
  cin >> chislo;
  int sotni = chislo / 100;
  int desyatky = (chislo / 10) % 10;
  int odynytsi = chislo % 10;
  cout << "Сотні: " << sotni << endl;
  cout << "Десятки: " << desyatky << endl;
  cout << "Одиниці: " << odynytsi << endl;
  int den;
  cout << "Введіть день свого народження, приклад 23: ";
  cin >> den;
  cout << "Оновлене число: " << sotni << den << odynytsi << endl;

  return 0;
}