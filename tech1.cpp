#include<iostream>
#include<cmath>
using namespace std;


 


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
  cout << "n1^n2 :" <<exp<< endl;

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


double sin(double x, int terms)
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

float cos(double x,int terms)
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


float tan(double x, int terms)
{
  float tan = 1.0;
  tan = sin(x,terms)/cos(x,terms);
  return tan;
}
float sec = 1/cos;
float cosec = 1/sin;

float cot = 1/tan;



int main()

{
    cout<<"Calculator TechSoc'27 Task 1"<<endl;
    cout<<"Enter the operation (+,-,*,/,sin,cos,tan,cot,cosec,sec) : "<<endl;
    string oper;
    cin >> oper;
    if(oper=="sin" || "cos" || "tan"||"cot" || "cosec" || "sec"){
    cout<<"Enter value in degrees: "<<endl;
       int w1,w2,w3;
        cin>>w1;
        if(oper= sin){
            cout<<"sin("<<w1<<") = "<< sin(w1);
        }
        else if (oper = cos){
            cout << "cos("<<w1<<") = "<<cos(w1);
        }
        else if (oper = tan){
            cout << "tan("<<w1<<") = "<<tan(w1) ;
        }
        else if (oper = cot){
            cout << "cot("<<w1<<") = "<<cot(w1) ;
        }
        else if (oper = cosec){
            cout << "cosec("<<w1<<") = "<<cosec(w1); 
        }
        else if (oper = sec){
            cout << "sec("<<w1<<") = "<<sec(w1) ;
        }
        else(){
            cout<<"Invalid Input"<<endl;

        }
        

    }
    else (oper== "+"||"-"||"*"||"/"){
        cout<<"Enter first number: "<<endl;
        cin >> w2;
         cout<<"Enter second number: "<<endl;
        cin >> w3;
        if(oper== '+'){
            cout<<"sum is : "<<w2+w3<<endl;
            else  (oper== '-'){
            cout<<"sum is : "<<w2-w3<<endl;
        }

    }}
    return 0;
}
