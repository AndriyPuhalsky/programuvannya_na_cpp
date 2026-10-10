#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int global = 10;       // глобальна змінна, яку бачать всі функції
int add(int a, int b); // оголошення функції, для того щоб вона була
int mnozhennya(int a, int b);
void dilennya(int a, int b);
void addFive(int &global); // передача змінної за посиланням (&) дозволяє
                           // перезаписати змінну
double fact(double k);

int main() {
  int x, y;
  cout << "Глобальна змінна до змін: " << global << '\n';
  cout << "Введіть 2 числа " << '\n';
  cin >> x >> y;
  cout << "Сума чисел: " << add(x, y) << '\n';
  cout << "Добуток глобальної змінної на добуток чисел: "
       << global * mnozhennya(x, y) << '\n';
  cout << "Різниця чисел: " << [](int a, int b) { return a - b; }(x, y)
       << '\n'; // лямбда вираз, викликається одразу, як звичайна функція,
                // синтаксис схожий, але без оголошення
  dilennya(x, y);
  addFive(global);
  cout << "Глобальна змінна після змін: " << global << '\n';
  cout << "Факторіал суми чисел: " << add(x, y) << " = " << fact(add(x, y))
       << '\n';
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

void addFive(int &global) { global += 5; }

double fact(double k) { // рекурсивна функція, яка рахує факторіал числа 'k'
  if (k == 0 || k == 1) {
    return 1;
  } else {
    return k * fact(k - 1);
  }
}