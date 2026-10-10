// пошук суми елементів головної діагоналі у двовимірному масиві

#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int a[10][10], i, j, n, m, s = 0;
  srand(time(0));
  cout << "n ="; // кількість рядків повинні = стовпцям
  cin >> n;
  cout << "m ="; // кількість стовпців повинні = рядкам
  cin >> m;

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      a[i][j] = rand() % 10; // заповнюємо масив випадковими числами

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      if (i == j)
        s = s + a[i][j];
  }
  cout << "Сума елементів головної діагоналі: " << s << endl;

  return 0;
}