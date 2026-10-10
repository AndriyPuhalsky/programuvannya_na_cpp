#include <ctime>    // час
#include <iostream> //бульбашкове сортування
using namespace std;

int main() {
  int a[15], i, j, temp, n; // temp = тимчасовий
  srand(time(0));           // для генерації випадкових чисел
  cout << "n= ";
  cin >> n;
  for (i = 0; i < n; i++) {
    a[i] = rand() % 11;
    cout << a[i] << " ";
  }
  cout << endl;
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if (a[i] < a[j]) { // для сортування за спаданням, якщо стоїть >, то за
                         // зростанням
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }

  for (i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}