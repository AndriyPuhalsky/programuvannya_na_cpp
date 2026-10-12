/*Напишіть програму яка створює масив і заповнює його парними натуральними
 * числами*/
#include <iostream>
using namespace std;

int main() {
  int arr_1[0], arr_2[0];
  int size_arr_1, size_arr_2;
  cout << "Введіть розмір масиву з парними числами: ";
  cin >> size_arr_1;

  for (int i = 1; i <= size_arr_1; i++) {
    arr_1[i] = i * 2;
  }
  cout << "Парні числа: ";
  for (int i = 1; i <= size_arr_1; i++) {
    cout << arr_1[i] << " ";
  }

  cout << endl;
  cout << "Введіть розмір масиву з непарними числами: ";
  cin >> size_arr_2;

  for (int i = 1; i <= size_arr_2; i++) {
    arr_2[i] = i * 2 - 1;
  }
  cout << "Непарні числа: ";
  for (int i = 1; i <= size_arr_2; i++) {
    cout << arr_2[i] << " ";
  }
  cout << endl;
  return 0;
}
