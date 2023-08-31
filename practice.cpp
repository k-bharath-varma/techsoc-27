#include<iostream>
using namespace std;
#include<cmath>

 


int exponential()
{
   
 double n1=1.0,n2=1.0;
  double exp = 1.0;
 cout << "Enter base value" << endl;
 cin>>n1;
 cout << "Enter power value" << endl;
 cin>>n2;

 for(int i = 1; i <= n2;i++)
 {
   exp = exp*n1;
   
 }
  cout << "Exponential Answer is:" <<exp<< endl;

}

int trigoexpo(double n1,double n2)
{
 
  int exp = 1;


 for(int i = 1; i <= n2;++i)
 {
   exp = exp*n1;
   
 }
  return exp;

}

int fact(int a1)
{
  double factorial = 1;
 for(int i = 1; i <= a1; ++i) {
            factorial *= i;
        }
    return factorial;      
    }


   /* int a2 = 2;
    int fac;
    while(a2<=a1)
    {
       fac = fac*a2;
       a2++;
    }
    return fac;*/



float sinvalue(double x, int terms)
{
    float result = 0.0;
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



int main()

{
    int n,a,b,c,result;
 cout << "Welcome to IITI Calculator" << endl;
 cout << "Press 1 for algebric calculations" << endl;
 cout << "Press 2 for trignometric values of entered degrees" << endl;
 cout << "Press 3 for exponential calculations" << endl;
 cout << "Press 4 for trignometric calculations" << endl;

 

 cin>>n ;

 if (n==1)
 {
   cout << "Enter first number" << endl; 
   cin>> a;
    cout << "Enter second number" << endl; 
    cin>> b ;
   cout << "Enter 1 for sum, 2 for division, 3 for multiplication, 4 for subtraction" << endl;
   cin>> c ;

   if (c==1)
   {
result = a+b;
cout<< "Sum of the 2 numbers is :"<< result <<endl;
   }

else if (c==2)
{
    result = a/b;
    cout<< "Division of the 2 numbers is :"<< result <<endl;
}

else if (c==3)
{
    result = a*b;
    cout<< "Multiplication of the 2 numbers is :"<< result <<endl;
}

else if (c==4)
{
    result = a-b;
    cout<< "Subtraction of the 2 numbers is :"<< result <<endl;
}

else{
    cout<< "wrong input"<< endl;
}

 }
else if (n==2)
{
    double trig;
    int d;
  cout << "enter value in degrees for which you need to find trignometric value" << endl;

  cin>> trig ;

   cout << "enter \n 1 for sin \n 2 for cos \n 3 for tan \n 4 for cosex \n 5 for sec \n 6 for cot" << endl;
   cin>> d ;

 if (d==1)
 {
    cout<< "Sin value of " << trig << " is: " 
    << sin(trig)<< endl;

 }

 else if (d==2)
 {
    cout<< "Cos value of " << trig << " is: " 
    << cos(trig)<< endl;

 }

else if (d==3)
 {
    cout<< "tan value of " << trig << " is: " 
    << tan(trig)<< endl;

 }

 else if (d==4)
 {
    cout<< "cosec value of " << trig << " is: " 
    << asin(trig)<< endl;

 }
  
   else if (d==5)
 {
    cout<< "cosec value of " << trig << " is: " 
    << acos(trig)<< endl;

 }
 
    else if (d==6)
 {
    cout<< "cot value of " << trig << " is: "
     <<atan(trig)<< endl;

 }
 

}

else if(n==3)
{
  exponential();
}


else if(n==4)
{
 double x = 1.0;
    int terms = 1;

 cout << "enter value"<< endl;
   cin>>x ;
   cout << endl;
   cout<< "enter terms (more terms would lead to more accuracy)"<< endl;
   cin>>terms;

  cout<< "sin: " << sinvalue(x,terms)<< endl;
  cout<< "cos: " << cosvalue(x,terms)<< endl;
  cout<< "tan: " << tanvalue(x,terms)<< endl;



}
else
{
  cout<<"Wrong Input Try again" << endl;
}
// comment

}