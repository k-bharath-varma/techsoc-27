#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}


int fact(int a1)
{
  double factorial = 1;
 for(int i = 1; i <= a1; ++i) {
            factorial *= i;
        }
    return factorial;      
    }
   
   
   
    double sinvalue(double x, int terms)
{
    double result = 0.0;
    int j;
    cout << "Starting..." << endl;
   for(int i = 0; i<= terms;++i)
   {

    j = 2*i-1;
    cout << trigoexpo(-1, i+1)*trigoexpo(x, j)/fact(j);

   result += trigoexpo(-1, i+1)*trigoexpo(x, j)/fact(j); 
    

   }
   cout << result;
   return result;

}



float cosvalue(double x,int terms)
{
 float result = 0;
 int j;
 
  for(int i = 1; i< terms;++i)
{  
   j = 2*i-1;
   result += trigoexpo(-1, i+1)*trigoexpo(x, j)/fact(j); 
}
  return result;
}


float tanvalue(double x, int terms)
{
  float tanval = 1.0;
  tanval = sinvalue(x,terms)/cosvalue(x,terms);
  return tanval;
}



int main() {
    double n1, n2;
    char op;
    
    cout << "Enter the first number: ";
    cin >> n1;
    
    cout << "Enter the operation: ";
    cin >> op;
    
    cout << "Enter the second number: ";
    cin >> n2;
    
    double Result;

    if (op == '+') {
        Result = n1 + n2;
    } else if (op == '-') {
        Result = n1 - n2;
    } else if (op == '*') {
        Result = n1 * n2;
    } else if (op == '/') {
        if (n2 != 0) { 
            Result = n1 / n2;
        } else {
            cout << "Division by zero is not allowed." << endl;
            return 1; 
        }
    } else {
        cout << "Invalid Input" << endl;
        return 1; 
    }

    cout << "Result: " << Result << endl; 

    return 0;
}
