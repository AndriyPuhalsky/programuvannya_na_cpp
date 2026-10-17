/*Напишіть програму яка відображає 5 перших непарних чисел*/
#include <iostream>
using namespace std;

void neparni(int count) {
    cout << "Непарні числа: ";
    for (int i = 1; i <= count; i++) {
        cout << 2 * i - 1 << " ";  
    }
}

void parni(int count) {
    cout << "Парні числа: ";
    for (int i = 1; i <= count; i++) {
        cout << 2 * i << " ";  
    }
}

int main() {
    neparni(10);
    cout << "\n";
    parni(10);
    cout << endl;
    return 0;
}