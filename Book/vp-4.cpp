/*Напишіть програму яка виводить кількість чисел фібоначі, кількість чисел вводить користувач з клавіатури*/
#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Введіть кількість чисел фібоначі: ";
    cin >> count;
    long long fib_0 = 0;
    long long fib_1 = 1;
    for (int i = 0; i < count; i++) {
        if (fib_0 > 999999) {
            break;
        }
        cout << fib_1 << " ";
        fib_1 = fib_0 + fib_1;
        fib_0 = fib_1 - fib_0;
    }
    return 0;
}