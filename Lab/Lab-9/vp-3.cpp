/*Для квадратної цілочисельної матриці розмірності n×n знайти
максимальний елемент головної діагоналі та мінімальний елемент бічної
діагоналі. Поміняти знайдені елементи місцями*/

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

void drukuvaty(const int a[][max_cols], int n) {
  for (int i{0}; i < n; ++i) {
    for (int j{0}; j < n; ++j) {
      cout << a[i][j] << '\t';
    }
    cout << '\n';
  }
  cout << "(" << n << " x " << n << ")\n";
}

bool mistyt(const int a[][max_cols], int rows, int cols, int znachennya) {
  for (int i{0}; i < rows; ++i) {
    for (int j{0}; j < cols; ++j) {
      if (a[i][j] == znachennya) {
        return true;
      }
    }
  }
  return false;
}

void zapovnyty_unikalnymy(int a[][max_cols], int n, int vid, int do_vkl) {
  for (int i{0}; i < n; ++i) {
    for (int j{0}; j < n; ++j) {
      int kandydat{vypadkove(vid, do_vkl)};
      while (mistyt(a, i + 1, n, kandydat)) {
        kandydat = vypadkove(vid, do_vkl);
      }
      a[i][j] = kandydat;
    }
  }
}

int max_el_golovnoi_idx(const int a[][max_cols], int n) {
  int max_idx = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i][i] > a[max_idx][max_idx]) {
      max_idx = i;
    }
  }
  return max_idx;
}

int min_el_pobichnoi_idx(const int a[][max_cols], int n) {
  int min_idx = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i][n - 1 - i] < a[min_idx][n - 1 - min_idx]) {
      min_idx = i;
    }
  }
  return min_idx;
}

int main() {
  int n;
  cout << "Введіть розмір матриці n (від 1 до " << max_rows << "): ";
  cin >> n;

  if (n <= 0 || n > max_rows) {
    cout << "Некоректний розмір матриці!\n";
    return 1;
  }

  int a[max_rows][max_cols]{0};

  zapovnyty_unikalnymy(a, n, -50, 50);

  cout << "Початкова матриця:\n";
  drukuvaty(a, n);

  int max_main_i = max_el_golovnoi_idx(a, n);
  int min_sec_i = min_el_pobichnoi_idx(a, n);

  int max_main_val = a[max_main_i][max_main_i];
  int min_sec_val = a[min_sec_i][n - 1 - min_sec_i];

  cout << "Максимальний елемент головної діагоналі: " << max_main_val
       << " [позиція: " << max_main_i << ", " << max_main_i << "]\n";

  cout << "Мінімальний елемент бічної діагоналі: " << min_sec_val
       << " [позиція: " << min_sec_i << ", " << n - 1 - min_sec_i << "]\n";

  swap(a[max_main_i][max_main_i], a[min_sec_i][n - 1 - min_sec_i]);

  cout << "Матриця після обміну елементів:\n";
  drukuvaty(a, n);

  return 0;
}