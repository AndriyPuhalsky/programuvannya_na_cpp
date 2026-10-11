/*Напишіть програму з функцією, яка обчислює суму натуральних чисел, і суму
 * непарних натуральних чисел*/
#include <iostream>
using namespace std;

int sum_nat(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int sum_nepar(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  int n;
  cout << "Введіть кількість натуральних чисел: ";
  cin >> n;
  cout << "Сума натуральних чисел: " << sum_nat(n) << endl;
  cout << "Сума непарних натуральних чисел: " << sum_nepar(n) << endl;
  return 0;
}