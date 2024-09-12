// ��������� ��������� � ����� ������������ ���������� �� ����� �������� ����-����. ������� ������ ������ � ���������.
// S=(1/2)*a*b
// c^2=a^2+b^2
// 6,8->10, s=24

#include <iostream>
#include <math.h>

int main()
{
    SetConsoleCP(1251); // ������������ ��������� Windows-1251 �  ���� ��������
    SetConsoleOutputCP(1251); // ������������ ��������� Windows-1251 �  ���� ���������
    int leg1, leg2;

    std::cout << "������ ������� ������� ������:  ";
    std::cin >> leg1;
    std::cout << "������ ������� ������� ������:  ";
    std::cin >> leg2;

    double hypotenuse = sqrt(pow(leg1, 2) + pow(leg2, 2));
    double area = 0.5 * leg1 * leg2;

    std::cout << "ó��������: " << hypotenuse << std::endl;
    std::cout << "�����: " << area;
}