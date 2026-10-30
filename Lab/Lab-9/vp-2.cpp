/*Дано одновимірний масив дійсних чисел a розмірності n. Заповнити
його за допомогою генератора псевдовипадкових чисел з діапазону [-10; 10].
Відсортувати елементи з парними індексами за зростанням, а елементи з
непарними індексами — за спаданням, не змінюючи їх належності до
відповідних позицій*/

#include <iostream>
#include <random>

using namespace std;

mt19937 generator{random_device{}()};

double vypadkove(double vid, double do_vkl) {
  uniform_real_distribution<double> rozpodil{vid, do_vkl};
  return rozpodil(generator);
}

int main() {

  int n;
  cout << "Введіть розмір масиву n: ";
  cin >> n;
  double a[n];
  for (int i = 0; i < n; i++) {
    a[i] = vypadkove(-10.0, 10.0);
  }

  cout << "Початковий масив:\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < n; i += 2) {
    for (int j = i + 2; j < n; j += 2) {
      if (a[i] > a[j]) {
        double temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for (int i = 1; i < n; i += 2) {
    for (int j = i + 2; j < n; j += 2) {
      if (a[i] < a[j]) {
        double temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  cout << "Відсортований масив:\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
