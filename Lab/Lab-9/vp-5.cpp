/*Дано символьний масив s. Замінити всі послідовності з двох і більше
пробілів одним пробілом, а також видалити пробіли на початку та в кінці
рядка. Визначити кількість пробілів, які було видалено.*/

#include <iostream>
using namespace std;

int dovzhyna(const char s[]) {
  int n{0};
  while (s[n] != '\0') {
    ++n;
  }
  return n;
}

// Два індекси в одному масиві: chytannya біжить по всіх символах,
// zapys рухається лише тоді, коли символ залишаємо.
// Повертає, скільки пробілів видалено.
int stysnuty_probily(char s[]) {
  int zapys{0};
  int chytannya{0}; // оголошений до циклу, щоб після нього знати стару довжину
  for (; s[chytannya] != '\0'; ++chytannya) {
    if (s[chytannya] != ' ') {
      s[zapys] = s[chytannya];
      ++zapys;
    } else if (zapys > 0 && s[zapys - 1] != ' ') {
      // лишаємо лише перший пробіл після слова;
      // пробіли на початку (zapys == 0) і повтори підряд пропускаємо
      s[zapys] = ' ';
      ++zapys;
    }
  }
  if (zapys > 0 && s[zapys - 1] == ' ') {
    --zapys; // пробіл у кінці рядка
  }
  s[zapys] = '\0'; // текст став коротшим — ставимо новий кінець
  return chytannya - zapys;
}

int main() {
  char s[200]{};
  cout << "Введіть рядок: ";
  cin.getline(s, 200);

  cout << "До:    [" << s << "] довжина " << dovzhyna(s) << '\n';
  int vydaleno{stysnuty_probily(s)};
  cout << "Після: [" << s << "] довжина " << dovzhyna(s) << '\n';
  cout << "Видалено пробілів: " << vydaleno << '\n';

  return 0;
}
