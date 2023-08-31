#include <iostream>
#include <cmath>
using namespace std;

int trigoexpo(double n1, int n2)
{
    int exp = 1;
    for (int i = 1; i <= n2; ++i)
    {
        exp = exp * n1;
    }
    return exp;
}

int fact(int a1)
{
    double factorial = 1;
    for (int i = 1; i <= a1; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

double sin(double x, int terms)
{
    double result = 0.0;
    for (int i = 0; i <= terms; ++i)
    {
        int j = 2 * i - 1;
        result += trigoexpo(-1, i + 1) * trigoexpo(x, j) / fact(j);
    }
    return result;
}

double cos(double x, int terms)
{
    double result = 0.0;
    for (int i = 0; i < terms; ++i)
    {
        int j = 2 * i;
        result += trigoexpo(-1, i + 1) * trigoexpo(x, j) / fact(j);
    }
    return result;
}

double tan(double x, int terms)
{
    double tanValue = 0.0;
    double cosValue = cos(x, terms);

    if (cosValue != 0)
    {
        tanValue = sin(x, terms) / cosValue;
    }
    else
    {
        cout << "Error: Division by zero in tan calculation." << endl;
    }

    return tanValue;
}

double sec(double x, int terms)
{
    double cosValue = cos(x, terms);
    
    if (cosValue != 0)
    {
        return 1 / cosValue;
    }
    else
    {
        cout << "Error: Division by zero in sec calculation." << endl;
        return 0; 
    }
}

double cosec(double x, int terms)
{
    double sinValue = sin(x, terms);

    if (sinValue != 0)
    {
        return 1 / sinValue;
    }
    else
    {
        cout << "Error: Division by zero in cosec calculation." << endl;
        return 0; 
    }
}

double cot(double x, int terms)
{
    double cotValue = 0.0;
    double tanValue = tan(x, terms);

    if (tanValue != 0)
    {
        cotValue = 1 / tanValue;
    }
    else
    {
        cout << "Error: Division by zero in cot calculation." << endl;
    }

    return cotValue;
}

int main()
{
    cout << "Calculator TechSoc'27 Task 1" << endl;
    cout << "Enter the operation (+, -, *, /, sin, cos, tan, cot, cosec, sec) : " << endl;
    string oper;
    cin >> oper;

    if (oper == "sin" || oper == "cos" || oper == "tan" || oper == "cot" || oper == "cosec" || oper == "sec")
    {
        cout << "Enter value in degrees: " << endl;
        int w1, w2, w3;
        cin >> w1;
        
        if (oper == "sin")
        {
            cout << "sin(" << w1 << ") = " << sin(w1, 5); 
        }
        else if (oper == "cos")
        {
            cout << "cos(" << w1 << ") = " << cos(w1, 5); 
        }

        else
        {
            cout << "Invalid Input" << endl;
        }
    }
    else if (oper == "+" || oper == "-" || oper == "*" || oper == "/")
    {
        cout << "Enter first number: ";
        double w2, w3;
        cin >> w2;
        cout << "Enter second number: ";
        cin >> w3;

        if (oper == "+")
        {
            cout << "Sum is : " << w2 + w3 << endl;
        }
        else if (oper == "-")
        {
            cout << "Difference is : " << w2 - w3 << endl;
        }
        else if (oper == "*")
        {
            cout << "Product is : " << w2 * w3 << endl;
        }
        else if (oper == "/")
        {
            cout << "w2/w3 is : " << w2 / w3 << endl;
        }
       
    }
    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
