#include <cstdlib>
#include <iostream>
using namespace std;

void clearScreen() {
#if defined(_WIN32)
  system("cls");
#else
  system("clear");
#endif
}

int maximum(const int array[], int rozmir) {
  int max;
  max = array[0];

  for (int i = 0; i < rozmir; ++i)
    if (array[i] > max)
      max = array[i];
  return max;
}

int minimum(const int array[], int rozmir) {
  int min;
  min = array[0];

  for (int i = 0; i < rozmir; ++i)
    if (array[i] < min)
      min = array[i];
  return min;
}

void input(int array[], int rozmir) {
  int i{0};
  for (i = 0; i < rozmir; ++i)
    cin >> array[i];
}

void output(int array[], int rozmir) {
  int i{0};
  for (i = 0; i < rozmir; ++i)
    cout << array[i] << ' ';
  cout << endl;
}

void menu() {
  cout << "Choose operation: " << endl;
  cout << "1. Inpur array: " << endl;
  cout << "2. Output array: " << endl;
  cout << "3. Find max el: " << endl;
  cout << "4. Find min el: " << endl;
  cout << "5. Exit: " << endl;
}

int main() {

  int a[20], n, op;
  menu();
  while (op != 5) {
    cin >> op;
    switch (op) {
    case 1: {
      cout << "n= ";
      cin >> n;
      input(a, n);
      break;
    }
    case 2: {
      output(a, n);
      break;
    }
    case 3: {
      cout << "MAX = " << maximum(a, n) << endl;
      break;
    }
    case 4: {
      cout << "MIN = " << minimum(a, n) << endl;
      break;
    }
    case 5: {
      return 0;
      break;
    }
    default: {
      cout << "No operatin !" << endl;
    }
    }
    clearScreen();
    menu();
  }
}
