// Lab_02.cpp
// <Прізвище, ім’я студента>
// Лабораторна робота № 2.1
// Лінійні програми
// Варіант 21

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double alpha;  // вхідний параметр
    double z1;     // результат обчислення першої формули
    double z2;     // результат обчислення другої формули
    const double Pi = 4 * atan(1.0); // значення π

    cout << "alpha = ";
    cin >> alpha;

    // формули
    z1 = 2 * pow(sin((3 * Pi) / 2 + 2 * alpha), 2) *
        pow(cos((5 * Pi) / 2 + 2 * alpha), 2);

    z2 = 0.25 - 0.25 * sin((5 * Pi) / 2 - 8 * alpha);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
