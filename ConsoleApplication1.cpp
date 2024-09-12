// Обчислити гіпотенузу і площу прямокутного трикутника за двома заданими кате-тами. Довжини катетів ввести з клавіатури.
// S=(1/2)*a*b
// c^2=a^2+b^2
// 6,8->10, s=24

#include <iostream>
#include <math.h>

int main()
{
    int leg1, leg2;

    std::cout << "Введіть довжину першого катета:  ";
    std::cin >> leg1;
    std::cout << "Введіть довжину другого катета:  ";
    std::cin >> leg2;

    double hypotenuse = sqrt(pow(leg1, 2) + pow(leg2, 2));
    double area = 0.5 * leg1 * leg2;

    std::cout << "Гіпотенуза: " << hypotenuse << std::endl;
    std::cout << "Площа: " << area;
}
