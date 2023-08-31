#include <iostream>
using namespace std;

double maxno(int num1,int num2)
{
  if(num1 > num2)
{
  return num1;
} else {return num2;
}
}
int main(){

  int num1;
  int num2;
cout<< " Enter the first number: ";
cin>> num1 ;
cout<< " Enter the second number: ";
cin>> num2 ;
int result;
result = maxno(num1,num2);
cout<< "the maximum number is " << result<<endl;
return 0; 
}