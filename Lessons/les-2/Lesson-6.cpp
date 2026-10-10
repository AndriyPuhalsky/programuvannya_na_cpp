#include <ctime> // пошук мінімального елемента у двовимірному масиві
#include <iostream>
using namespace std;

int main() {
  int a[10][10], i, j, n, m, s = 0, min;
  srand(time(0));
  cout << "n ="; // кількість рядків повинні = стовпцям
  cin >> n;
  cout << "m ="; // кількість стовпців повинні = рядкам
  cin >> m;

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      a[i][j] = rand() % 10; // заповнюємо масив випадковими числами

  for (i = 0; i < n; i++) { // виводимо масив
    for (j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  min = a[0][0]; // першим елементом
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      if (a[i][j] < min)
        min = a[i][j];
  }
  cout << "Мінімальний елемент масиву: " << min << endl;

  return 0;
}