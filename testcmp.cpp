#include <iostream>
#include "mycomplex.h"
using namespace std;

int main() {
    // Тестирование класса комплексных чисел
    Complex A, B(-4), C(23.0, 45.9);

    cout << "Изначальные комплексные числа:" << endl;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    // Операции с комплексными числами
    A = B + C;
    cout << "\nA = B + C, A = " << A << endl;

    Complex M = B - C;
    cout << "M = B - C, M = " << M << endl;

    cout << "\nM * A = " << M * A << endl;
    cout << "M / 4.45 = " << M / 4.45 << endl;

    // Ввод нового комплексного числа
    Complex D;
    cout << "\nВведите комплексное число D = ";
    cin >> D;

    // Операции с новым числом
    A += C + D;
    cout << "\nПосле A += C + D:" << endl;
    cout << "D = " << D << "\nA = " << A << endl;

    // Операции с вещественными числами
    Complex E = B + 10.5;
    cout << "\nB + 10.5 = " << E << endl;

    E *= 2;
    cout << "E *= 2 = " << E << endl;

    E /= 3;
    cout << "E /= 3 = " << E << endl;

    // Проверка абсолютного значения
    cout << "\nАбсолютное значение комплексного числа C = " << C.abs() << endl;

    return 0;
}
