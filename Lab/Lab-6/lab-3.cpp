#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[100], i, n;
  srand(time(0));
  cout << "Enter size of array: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 21;
  }
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      a[i] = 0;
    } else {
      a[i] = 1;
    }
  }
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}