/*
Student data entry
It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data.
They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student]
*/


#include <iostream>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
   //Your code goes here
  struct student s;
  std::cout<<"\n";
  std::cout<<"Student Details"<<"\n";
  std::cin.get(s.name, 50);
  std::cin>>s.roll;
  std::cin>>s.marks;
  std::cout<<"Name: "<<s.name<<"\n";
  std::cout<<"Roll: "<<s.roll<<"\n";
  std::cout<<"Marks: "<<s.marks<<"\n";
}
