#include <iostream>
void clearInput();
int main()
{   double x=0, y=0;
    char symbol;
    std::cout << "Enter two integer that you want to calculate (separate by space): " << std::endl;
    while (!(std::cin >> x >> y)) {
        clearInput();
    }
    do {
        std::cout << "Please enter an operator(+,-,*,/,%): ";
        std::cin >> symbol;
    }
    while (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/' && symbol != '%');
    if(symbol == '+') {
        std::cout << x << " + " << y << " = " << x + y<< std::endl;
    } else if(symbol == '-') {
        std::cout << x << " - " << y << " = " << x - y<< std::endl;
    } else if(symbol == '*') {
        std::cout << x << " * " << y << " = " << x * y<< std::endl;
    } else if(symbol == '/') {
        if(y == 0) {
            std::cout << "Denominator can't be zero!" << std::endl;
        } else
            std::cout << x << " / " << y << " = " << x / y<< std::endl;
    } else if (symbol == '%') {
        int intX = static_cast<int>(x);
        int intY = static_cast<int>(y);
        if(y == 0) {
            std::cout << "Denominator can't be zero!" << std::endl;
        } else std::cout << x << " % " << y <<" = "<< intX % intY << std::endl;
    }
    return 0;
}
void clearInput(){
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cout << "Invalid input. Please enter the valid number or sign: ";
}
