// 4. Дано масив цілих чисел a[i], і = 1, … , n. Для кожного елемента
// масиву зі значенням 0 видалити попередній та наступний елементи масиву.

#include <cstddef>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[100], i, n, j;
  srand(time(0));
  cout << "Enter size of array: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 10;
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    if (a[i] == 0) {
      if (a[i - 1] != NULL && a[i + 1] != NULL) {
        for (j = i; j < n; j++)
          a[j + 1] = a[j + 2];
        n--;
        for (j = i; j < n; j++)
          a[j - 1] = a[j];
        n--;
      } else if (a[i - 1] == NULL) {
        for (j = i; j < n; j++)
          a[j + 1] = a[j];
        n--;
      } else if (a[i + 1] == NULL) {
        for (j = i; j < n; j++)
          a[j - 1] = a[j];
        n--;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}