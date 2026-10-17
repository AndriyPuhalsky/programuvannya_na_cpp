#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Введіть довжину масиву: ";
  cin >> n;
  int arr[n], a = 2;
  for (int i = 0; i < n; i++) {
    arr[i] = pow(a, i);
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}