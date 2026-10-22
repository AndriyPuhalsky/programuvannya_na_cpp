/*Дано масив дійсних чисел a[i], і = 1, … , n.
а) Обчислити середнє
значення парних елементів масиву;
б) вставити перед кожним елементом, який
більше 10, значення 0.*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  int n{20};
  double a[40];
  srand(time(0));

  cout << "Початковий масив: ";
  for (int i = 0; i < n; i++) {
    a[i] = (rand() % 1300) / 100.0;
    cout << a[i] << " ";
  }
  cout << endl;

  // а
  double sum{0};
  int count{0};
  cout << "Парні елементи: ";
  for (int i = 0; i < n; i++) {
    if (static_cast<int>(a[i]) % 2 == 0 && static_cast<int>(a[i]) != 0) {
      sum += a[i];
      count++;
      cout << a[i] << " ";
    }
  }
  cout << '\n';

  if (count > 0) {
    cout << "Середнє значення парних елементів: " << sum / count << endl;
  } else {
    cout << "Парних елементів не знайдено." << endl;
  }
  cout << '\n';

  // б

  for (int i = 0; i < n; i++) {
    if (a[i] > 10.0) {
      // Посуваємо всі елементи від кінця (n) до поточної позиції (i) вправо
      for (int j = n; j > i; j--) {
        a[j] = a[j - 1];
      }
      a[i] = 0;
      n++;
      i++;
    }
  }

  cout << "Масив після вставки: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
