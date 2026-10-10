#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[100], b[100], c[100], i, n;
  srand(time(0));
  cout << "Enter size of array: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 21 - 10;
    b[i] = rand() % 21 - 10;
    c[i] = a[i] + b[i];
  }
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    cout << c[i] << " ";
  }

  return 0;
}