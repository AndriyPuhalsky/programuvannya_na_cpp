// Дано масив дійсних чисел a[i], і = 1, … , n з діапазону [-4;10] (2 знаки
// після коми). Знайти порядкові номери та суму елементів з відрізка [-1, 5].
// Виконати сортування лише парних елементів масиву за зростанням.

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n = 20;
  double a[n];
  srand(time(0));

  cout << "Початковий масив: ";
  for (int i = 0; i < n; i++) {
    a[i] = (rand() % 1401 - 400) / 100.0;
    cout << fixed << setprecision(2) << a[i] << " ";
  }
  cout << endl << endl;

  // 1. Пошук суми та порядкових номерів
  double sum = 0;
  cout << "Порядкові номери елементів з відрізка [-1, 5]: ";
  for (int i = 0; i < n; i++) {
    if (a[i] >= -1.0 && a[i] <= 5.0) {
      sum += a[i];
      cout << i + 1 << " ";
    }
  }
  cout << endl;
  cout << "Сума елементів з відрізка [-1, 5]: " << sum << endl << endl;

  // 2. Сортування за зростанням парних за індексом елементів (0, 2, 4...)
  for (int i = 0; i < n; i += 2) {
    for (int j = i + 2; j < n; j += 2) {
      if (a[i] > a[j]) {
        double temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  cout << "Відсортований масив (перемішано лише елементи на парних позиціях):"
       << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}