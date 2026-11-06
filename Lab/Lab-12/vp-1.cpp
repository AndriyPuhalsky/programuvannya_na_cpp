#include <cstdlib>
#include <iostream>
#include <random>
#include <string>
using namespace std;

constexpr int ARR_MAX_SIZE = 100;

void clearScreen() {
#if defined(_WIN32)
  system("cls");
#else
  system("clear");
#endif
}

mt19937 generator{random_device{}()};

int vypadkove(int vid, int do_vkl) {
  uniform_int_distribution<int> rozpodil{vid, do_vkl};
  return rozpodil(generator);
}

void drukuvaty_masyv(const int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int sum(const int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

int avr(const int arr[], int n) { return sum(arr, n) / n; }

void sort_asc(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

void sort_desc(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

void insert(int arr[ARR_MAX_SIZE], int &n, int x, int y) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      for (int j = n; j > i; j--) {
        arr[j] = arr[j - 1];
      }
      arr[i + 1] = y;
      n++;
    }
  }
}

void deletee(int arr[ARR_MAX_SIZE], int &n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
      }
      n--;
    }
  }
}

void menu(int &press) {
  cout << string(40, '-') << endl;
  cout << '|' << string(17, ' ') << "MENU" << string(17, ' ') << '|' << endl;
  cout << string(40, '-') << endl;
  cout << "1 - Show array" << endl;
  cout << "2 - Sum of array elements" << endl;
  cout << "3 - Average of array elements" << endl;
  cout << "4 - Sort ascending" << endl;
  cout << "5 - Sort descending" << endl;
  cout << "6 - Insert value Y after each X" << endl;
  cout << "7 - Delete element with value X" << endl;
  cout << "8 - Exit" << endl;
  cout << string(40, '-') << endl;
  cout << "Enter your choice: ";
  cin >> press;
  clearScreen();
}

int main() {
  int n, x, y;
  cout << "Enter array size (1..100): ";
  cin >> n;
  if (n < 1 || n > ARR_MAX_SIZE) {
    cout << "Error: array size must be between 1 and 100";
    return 1;
  }
  int a[ARR_MAX_SIZE];
  for (int i = 0; i < n; i++) {
    a[i] = vypadkove(1, 100);
  }
  int press;
  while (press != 8) {
    menu(press);
    switch (press) {
    case 1:
      cout << "Your array: ";
      drukuvaty_masyv(a, n);
      break;
    case 2:
      cout << "Sum of array elements: " << sum(a, n) << endl;
      break;
    case 3:
      cout << "Average of array elements: " << avr(a, n) << endl;
      break;
    case 4:
      cout << "Sorted array: ";
      sort_asc(a, n);
      drukuvaty_masyv(a, n);
      break;
    case 5:
      cout << "Sorted array: ";
      sort_desc(a, n);
      drukuvaty_masyv(a, n);
      break;
    case 6:
      cout << "Enter X: ";
      cin >> x;
      cout << "Enter Y: ";
      cin >> y;
      insert(a, n, x, y);
      drukuvaty_masyv(a, n);
      break;
    case 7:
      cout << "Enter X: ";
      cin >> x;
      deletee(a, n, x);
      drukuvaty_masyv(a, n);
      break;
    case 8:
      cout << "See you later" << endl;
      clearScreen();
      break;
    default:
      cout << "Error: invalid choice" << endl;
    }
  }

  return 0;
}