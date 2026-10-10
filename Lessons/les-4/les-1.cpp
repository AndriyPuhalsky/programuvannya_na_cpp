#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int global = 10;       // глобальна змінна, яку бачать всі функції
int add(int a, int b); // оголошення функції, для того щоб вона була
int mnozhennya(int a, int b);
void dilennya(int a, int b);

int main() {
  int x, y;
  cout << "Введіть 2 числа " << '\n';
  cin >> x >> y;
  cout << "Сума чисел: " << add(x, y) << '\n';
  cout << "Добуток глобальної змінної на добуток чисел: "
       << global * mnozhennya(x, y) << '\n';
  cout << "Різниця чисел: " << [](int a, int b) { return a - b; }(x, y)
       << '\n'; // лямбда вираз, викликається одразу, як звичайна функція,
                // синтаксис схожий, але без оголошення
  dilennya(x, y);
  return 0;
}

int add(int a, int b) { // функція пишеться після main,
  //  тип даних функції і того що вона повертає повинні бути однаковими, це
  //  обов'язково!
  int summ = 0;
  summ = a + b;
  return summ;
}

int mnozhennya(int a, int b) {
  int dobutok = 0;
  dobutok = a * b;
  return dobutok;
}

void dilennya(
    int a,
    int b) { // void - тип даних функції, означає що вона нічого не повертає
  int d = 0;
  d = a / b;
  cout << "Частка чисел: " << d << '\n';
}
