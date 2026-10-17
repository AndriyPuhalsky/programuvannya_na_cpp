#include <iostream>
using namespace std;

int main() {
  const int size = 100;
  int arr[size];
  int count = 0;
  int x;
  do {
    cout << "Введіть число (або 0 для завершення): ";
    cin >> x;
    if (x != 0) {
      if (count < size) {
        arr[count] = x;
        count++;
      } else {
        cout << "Масив заповнено!" << endl;
      }
    }
  } while (x != 0);
  cout << "Елементи масиву: ";
  for (int i = 0; i < count; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}