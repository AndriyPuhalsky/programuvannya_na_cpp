#include <iostream>
using namespace std;

int main() {
  int n, i;
  int ostanniy_element = 0;
  cout << "Введіть розмір масиву: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    }
    n++;
    n[i - 1] = ostanniy_element;
    cout << n[i - 1] << " ";
  }

  return 0;
}