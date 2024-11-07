#include <iostream>
#include <cmath>
#include "funcA.h"

int main(){
	FuncA func;
	    double x;

    std::cout << "Введіть значення x (|x| < pi/2): ";
    std::cin >> x;
    const double PI = 3.14159265358979323846;
    
    if (std::abs(x) >= PI / 2) {
        std::cout << "Помилка: значення x має бути менше за pi/2" << std::endl;
        return 1;
    }

    double result = func.calculateTrigFunction(x);
    std::cout << "Результат обчислення: " << result << std::endl;

    return 0;
}

