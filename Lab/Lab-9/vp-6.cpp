/*Дано два символьні масиви s1 та s2. Визначити кількість входжень
рядка s2 у рядок s1. Якщо входжень немає, вивести відповідне повідомлення.*/

#include <iostream>
using namespace std;

// Чи стоїть у s1, починаючи з позиції i, точна копія s2.
// За межі s1 не виходимо: коли s1 закінчиться, s1[i + j] == '\0',
// а s2[j] ще не '\0' — символи різні, і функція повертає false.
bool zbigayetsya(const char s1[], int i, const char s2[]) {
  for (int j{0}; s2[j] != '\0'; ++j) {
    if (s1[i + j] != s2[j]) {
      return false;
    }
  }
  return true;
}

// Пробуємо кожну позицію s1 як початок входження
int kilkist_vhodzhen(const char s1[], const char s2[]) {
  int k{0};
  for (int i{0}; s1[i] != '\0'; ++i) {
    if (zbigayetsya(s1, i, s2)) {
      ++k;
    }
  }
  return k;
}

int main() {
  char s1[200]{};
  char s2[200]{};
  cout << "Введіть рядок s1: ";
  cin.getline(s1, 200);
  cout << "Введіть рядок s2: ";
  cin.getline(s2, 200);

  if (s2[0] == '\0') {
    cout << "Рядок s2 порожній — шукати нічого\n";
    return 1;
  }

  int k{kilkist_vhodzhen(s1, s2)};
  if (k == 0) {
    cout << "Рядок [" << s2 << "] не входить у [" << s1 << "]\n";
  } else {
    cout << "Кількість входжень [" << s2 << "] у [" << s1 << "]: " << k
         << '\n';
  }

  return 0;
}
