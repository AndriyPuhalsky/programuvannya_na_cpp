#include <iostream>
using namespace std;

int add_arr(int size_arr) {
  int arr[size_arr];
  return arr[size_arr];
}
int add_into_arr(int arr[], int size_arr) {
  for (int i = 1; i <= size_arr; i++) {
    arr[i] = i * i;
  }
  return arr[size_arr];
}

int main() {
  int size_arr;
  cout << "Введіть розмір масиву: ";
  cin >> size_arr;

  cout << add_into_arr(add_arr(size_arr), size_arr);
  return 0;
}