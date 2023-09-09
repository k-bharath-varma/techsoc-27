#include <iostream>
using namespace std;
int main(){
    int a;
    cin>> a;
    

    int count = 1;

    while (count <= a) {
string bharath;
cin>>bharath;
int q = bharath.length();
if (q>10){
cout<<bharath[0];
cout<< q-2 ;
cout<< bharath[q-1]<<endl;}
else {cout<<bharath<<endl;}

        count++; 
    }
return 0;
}