#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  double input_n;
  cout << "Введіть кількість елементів масиву (n): ";
  cin >> input_n;
  cout << '\n';

  if (input_n >= 1) {
    cout << "Введено число форматую в ціле натуральне -> " << trunc(input_n)
         << endl;
    cout << '\n';

    int n = static_cast<int>(trunc(input_n));
    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
      arr[i] = rand() % 100 + 1;
    }

    cout << "Всі елементи масиву: ";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
    cout << '\n';

    cout << "Числа кратні 3 і не кратні 7: ";
    for (int i = 0; i < n; i++) {
      if ((arr[i] % 3 == 0) && (arr[i] % 7 != 0)) {
        cout << arr[i] << " ";
      }
    }
    cout << endl;

  } else {
    cout << "Число " << input_n << " не є натуральним числом!" << endl;
  }
  return 0;
}
