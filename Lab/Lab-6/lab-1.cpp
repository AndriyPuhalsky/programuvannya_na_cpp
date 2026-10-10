#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[100], i, n, min, d = 1;
  srand(time(0));
  cout << "Enter size of array: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 8 - 3;
    cout << endl;
  }
  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  min = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  cout << endl << "Minimum element: " << min;
  for (i = 0; i < n; i++) {
    if (a[i] > 0) {
      d *= a[i];
    }
  }
  cout << endl << "Dobutok dodatnyhs elementiv: " << d;

  return 0;
}