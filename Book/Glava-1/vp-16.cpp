#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введіть довжину масиву: ";
  cin >> n;
  int arr[n];
  for (int i{0}; i < n; i++) {
    if (i % 2 != 0)
      arr[i] = i;
    else
      arr[i] = pow(i, 2);
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}