#include <iostream>
#include "mycomplex.h"
using namespace std;

int main() {
    // ������������ ������ ����������� �����
    Complex A, B(-4), C(23.0, 45.9);

    cout << "����������� ����������� �����:" << endl;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    // �������� � ������������ �������
    A = B + C;
    cout << "\nA = B + C, A = " << A << endl;

    Complex M = B - C;
    cout << "M = B - C, M = " << M << endl;

    cout << "\nM * A = " << M * A << endl;
    cout << "M / 4.45 = " << M / 4.45 << endl;

    // ���� ������ ������������ �����
    Complex D;
    cout << "\n������� ����������� ����� D = ";
    cin >> D;

    // �������� � ����� ������
    A += C + D;
    cout << "\n����� A += C + D:" << endl;
    cout << "D = " << D << "\nA = " << A << endl;

    // �������� � ������������� �������
    Complex E = B + 10.5;
    cout << "\nB + 10.5 = " << E << endl;

    E *= 2;
    cout << "E *= 2 = " << E << endl;

    E /= 3;
    cout << "E /= 3 = " << E << endl;

    // �������� ����������� ��������
    cout << "\n���������� �������� ������������ ����� C = " << C.abs() << endl;

    return 0;
}
