#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введіть натуральне число n від 0 до 5000: ";
  cin >> n;
  if (n >= 0 && n <= 5000 && trunc(n) == n) {
    cout << "Введено число форматую в ціле натуральне... виходить -> "
         << trunc(n) << endl;
    cout << "Число належить діапазону від 0 до 5000" << endl;
    for (int i = 0; i <= n; i++) {
      while (i * i <= n) {
        cout << "Квадрат числа: " << i << " = " << i * i << endl;
        i++;
      }
    }

  } else {
    cout << "Число " << n << " не належить діапазону від 0 до 5000" << endl;
  }

  return 0;
}