#include <iostream>
#include <cmath>
#include <string>

std::string gg(double x, double y, char op);

int main()
{
    double x, y;
    char op;

    std::cout << "This is a test mode of calculator.\nFill the following condition.\n";
    std::cout << "x: ";
    std::cin >> x;

    std::cout << "y: ";
    std::cin >> y;

    std::cout << "Choose an operator (+, -, *, /): ";
    std::cin >> op;

    std::string result = gg(x, y, op);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

std::string gg(double x, double y, char op)
{
    double res;
    switch (op)
    {
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            if (y == 0)
                return "Error: Division by zero.";
            res = x / y;
            break;
        default:
            return "Error: Invalid operator.";
    }

    return std::to_string(res);
}
