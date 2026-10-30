/*Дано одновимірний цілочисельний масив a розмірності n. Заповнити
його за допомогою генератора псевдовипадкових чисел з діапазону [-30; 30].
Знайти кількість елементів, кратних 5, та суму елементів, розташованих між
першим і останнім від'ємними елементами масиву. Якщо таких елементів
нема, вивести відповідне повідомлення.*/

#include <iostream>
#include <random>
using namespace std;

mt19937 generator{random_device{}()};

int vypadkove(int vid, int do_vkl) {
  uniform_int_distribution<int> rozpodil{vid, do_vkl};
  return rozpodil(generator);
}

int main() {
  int vid = -30, do_vkl = 30, n;
  cout << "n =";
  cin >> n;
  int a[n];

  for (int i{0}; i < n; ++i) {
    a[i] = vypadkove(vid, do_vkl);
    cout << a[i] << '\t';
  }
  cout << '\n';

  int kilkist = 0;
  for (int i{0}; i < n; ++i) {
    if (a[i] % 5 == 0)
      kilkist++;
  }
  cout << kilkist << '\n';

  int pershyi = -1, ostanni = -1;
  for (int i{0}; i < n; ++i) {
    if (a[i] < 0) {
      if (pershyi == -1) {
        pershyi = i;
      }
      ostanni = i;
    }
  }
  if (pershyi != -1 && ostanni != -1 && ostanni - pershyi > 1) {
    int sum = 0;
    for (int i = pershyi + 1; i < ostanni; ++i) {
      sum += a[i];
    }
    cout << "Сума між відʼємними: " << sum << '\n';
  } else {
    cout << "Немає елементів\n";
  }
  return 0;
}