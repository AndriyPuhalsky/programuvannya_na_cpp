#include <iostream>
using namespace std;

int kvadrat_n(int n) { return n * n; }

int main() {
  int arr[0];
  int size_arr;
  cout << "Введіть розмір масиву: ";
  cin >> size_arr;
  for (int i = 1; i <= size_arr; i++) {
    arr[i] = kvadrat_n(i);
  }
  for (int i = 1; i <= size_arr; i++) {
    cout << "Квадрат " << i << " = " << arr[i] << endl;
  }

  return 0;
}