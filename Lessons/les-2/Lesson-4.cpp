// двовимірні масиви

#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[10][10], i, j, n, m;
  srand(time(0));
  cout << "n ="; // кількість рядків
  cin >> n;
  cout << "m ="; // кількість стовпців
  cin >> m;

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      a[i][j] = rand() % 10; // заповнюємо масив випадковими числами

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  return 0;
}