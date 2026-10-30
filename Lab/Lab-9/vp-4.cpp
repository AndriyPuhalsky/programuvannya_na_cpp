/*Для цілочисельної матриці розмірності n×m обчислити суму
елементів кожного стовпця. Знайти стовпець із найбільшою сумою та
вивести його номер і всі елементи. Якщо таких стовпців декілька, вибрати
перший.*/

#include <iostream>
#include <random>
using namespace std;

constexpr int max_rows{10};
constexpr int max_cols{10};
mt19937 generator{random_device{}()};

int vypadkove(int vid, int do_vkl) {
  uniform_int_distribution<int> rozpodil{vid, do_vkl};
  return rozpodil(generator);
}

void zapovnyty(int a[][max_cols], int rows, int cols, int vid, int do_vkl) {
  for (int i{0}; i < rows; ++i) {
    for (int j{0}; j < cols; ++j) {
      a[i][j] = vypadkove(vid, do_vkl);
    }
  }
}

void drukuvaty(const int a[][max_cols], int rows, int cols) {
  for (int i{0}; i < rows; ++i) {
    for (int j{0}; j < cols; ++j) {
      cout << a[i][j] << '\t';
    }
    cout << '\n';
  }
  cout << "(" << rows << " x " << cols << ")\n";
}

int suma_stovptsya(const int a[][max_cols], int rows, int j) {
  int suma{0};
  for (int i{0}; i < rows; ++i) {
    suma += a[i][j];
  }
  return suma;
}

int main() {
  int rows, cols;
  cout << "Введіть кількість рядків n (від 1 до " << max_rows << "): ";
  cin >> rows;
  cout << "Введіть кількість стовпців m (від 1 до " << max_cols << "): ";
  cin >> cols;

  if (rows <= 0 || rows > max_rows || cols <= 0 || cols > max_cols) {
    cout << "Некоректний розмір матриці!\n";
    return 1;
  }

  int a[max_rows][max_cols]{};
  zapovnyty(a, rows, cols, -20, 20);

  cout << "Матриця:\n";
  drukuvaty(a, rows, cols);

  int sumy[max_cols]{};
  for (int j{0}; j < cols; ++j) {
    sumy[j] = suma_stovptsya(a, rows, j);
    cout << sumy[j] << '\t';
  }
  cout << "<- суми стовпців\n";

  int max_j{0};
  for (int j{1}; j < cols; ++j) {
    if (sumy[j] > sumy[max_j]) {
      max_j = j;
    }
  }

  cout << "Стовпець з найбільшою сумою: " << max_j + 1 << " (сума "
       << sumy[max_j] << ")\n";
  cout << "Його елементи: ";
  for (int i{0}; i < rows; ++i) {
    cout << a[i][max_j] << ' ';
  }
  cout << '\n';

  return 0;
}
