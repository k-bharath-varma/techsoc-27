#include <iostream>
#include <cmath>

double customPow(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Function to calculate sine using Taylor series approximation
double customSin(double x, int numTerms) {
    double result = 0.0;
    for (int n = 0; n < numTerms; ++n) {
        result += customPow(-1, n) * customPow(x, 2 * n + 1) / customPow(2 * n + 1, 1);
    }
    return result;
}

// Function to calculate cosine using Taylor series approximation
double customCos(double x, int numTerms) {
    double result = 0.0;
    for (int n = 0; n < numTerms; ++n) {
        result += customPow(-1, n) * customPow(x, 2 * n) / customPow(2 * n, 1);
    }
    return result;
}

int main() {
    char operation;
    double num1, num2;

    std::cout << "Enter an operation (+, -, *, /, ^, s, c): ";
    std::cin >> operation;

    switch (operation) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            break;
        case 's':
        case 'c':
            std::cout << "Enter an angle in radians: ";
            std::cin >> num1;
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
            return 1;
    }

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Division by zero is not allowed." << std::endl;
                return 1;
            }
            break;
        case '^':
            result = customPow(num1, static_cast<int>(num2));
            break;
        case 's':

            result = customSin(num1, 10);
            break;
        case 'c':
            result = customCos(num1, 10);
            break;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
