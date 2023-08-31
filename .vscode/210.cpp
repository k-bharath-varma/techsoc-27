#include <iostream>
using namespace std;

double maxint(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    double result = maxint(num1, num2);

    cout << "The maximum number is: " << result << endl;

    return 0;
}
