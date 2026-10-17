#include <iostream>

using namespace std;
int main() {
  int n;
  cout << "Введіть довжину масиву: ";
  cin >> n;
  int arr[n], a = 1, b = 0;
  for (int i = 0; i < n; i++) {
    arr[i] = a;
    a = a + b;
    b = arr[i];
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}