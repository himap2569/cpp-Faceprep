/*
Employee Structure
Write a C++ program to create a structure called employee with name, employee id, name, age designation and salary as
data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan 

ID of the Employee : 1 

Age of the Employee : 24 

Designation of the Employee : Manager 

Salary of the Employee : 20000.00 
*/
#include<iostream>
using namespace std;
struct emp{
  char name[20];
  int id;
  int age;
  char des[20];
  int sal;
};
void print(emp e){
  std::cout<<"Employee Details"<<"\n";
  std::cout<<"Name of the Employee : "<<e.name<<"\n";
  std::cout<<"ID of the Employee : "<<e.id<<"\n";
  std::cout<<"Age of the Employee : "<<e.age<<"\n";
  std::cout<<"Designation of the Employee : "<<e.des<<"\n";
  std::cout<<"Salary of the Employee : "<<e.sal<<"\n";
}
int main()
{
  //Type your code here.
  emp e;
  std::cout<<"Enter name:"<<"\n";
  std::cin.get(e.name,20);
  std::cout<<"Enter ID:"<<"\n";
  std::cin>>e.id;
  std::cout<<"Enter age:"<<"\n";
  std::cin>>e.age;
  std::cout<<"Enter designation:"<<"\n";
  std::cin>>e.des;
  std::cout<<"Enter Salary:"<<"\n";
  std::cin>>e.sal;
  print(e);
  return 0;
  
}
