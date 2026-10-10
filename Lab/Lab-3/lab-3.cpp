#include <iostream>
using namespace std;

int main() {
  int n, j;
  long sum = 0;
  cout << "Введіть розмір масиву: ";
  cin >> n;
  cout << "Введіть елементи масиву: ";

  for (int i = 0; i < n; i++) {
    cin >> j;
    sum += j;
  }

  cout << "Сума елементів масиву: " << sum << endl;

  return 0;
}