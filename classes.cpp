#include <iostream>
using namespace std;
class student {
   public:
   string name;
   int roll;
   double cgpa;
   string conduct;

   void student_details(){
      cout<< "Student name is "<<name<<endl;
      cout<< "Student roll number is "<<roll<<endl;
      cout<< "Student cgpa is "<<cgpa<<endl;
      cout << "Student conduct is "<<conduct<<endl;
   }
   student (string Name,int Roll,double Gpa,string Conduct){
      name = Name;
      roll = Roll;
      cgpa = Gpa;
      conduct = Conduct;
   }
};


int main(){
student student1=student("Bharath",2323,9.7,"Good");
student1.student_details();
student student2=student("Aasrith",6969,9.2,"ERRIP***");
student2.student_details();
student student3=student("Hemang",6900,9.5,"KondaErrip***r");
student3.student_details();


return 0;
}