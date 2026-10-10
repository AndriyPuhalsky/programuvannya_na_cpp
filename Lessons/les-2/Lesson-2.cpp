#include <ctime> // алгоритм вставки елемента в одновимірний масив
#include <iostream>
using namespace std;

int main() {
  int a[15], i, j, temp, n; // temp = тимчасовий
  srand(time(0));           // для генерації випадкових чисел
  cout << "n= ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 11;
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    if (a[i] == 2) {
      n++;
      for (j = n - 1; j > i; j--)
        a[j] = a[j - 1];
      a[i + 1] = 10;
    }
  }

  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}