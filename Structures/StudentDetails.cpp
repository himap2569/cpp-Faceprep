/*
Student details
Jeeva is the chairman of ABC university and he is planned to improve students education. So he is conducted meeting
for all departments HODs. Write a program to help all department HODs to display student details. Create a structure 
called Student. struct Student { char name[30]; char department[20]; int yearOfStudy; float cgpa; }; Write a program 
to get the details of 'n' students and to display their details, sorted in ascending order based on the name.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places. 

SAMPLE INPUT & OUTPUT:

Enter the number of students

1

Enter the details of student 1

Enter name

krish

Enter department

mca

Enter year of study

3

Enter cgpa

7.6

Details of students

Student 1

Name : krish

Department : mca

Year of study : 3

CGPA : 7.6
*/


#include<iostream>
#include<cstring>
using namespace std;
struct student{
  char name[30];
  char department[20]; 
  int yr; 
  float cgpa; 
}s;
void Alphasort (student* student, int size)
{
    int j, i;
        for(i = 0; i < size - 1; ++i)
        {
          for(j = i + 1; j < size; ++j)
            {
                if(strcmp(student[i].name,student[j].name) > 0)
                {
                    s = student[i];
                    student[i] = student[j];
                    student[j] = s;
                }
            }
        }
}
int main()
{
  //Type your code here.
  int n;
  std::cout<<"Enter the number of students";
  std::cin>>n;
  student stu[n];
  for(int i=0;i<n;i++){
     cout<<"\nEnter the details of student "<<i+1<<endl;
    cout<<"Enter name\n";
    cin>>stu[i].name;
    cout<<"Enter department\n";
	cin>>stu[i].department;
    cout<<"Enter year of study\n";
    cin>>stu[i].yr;
    cout<<"Enter cgpa";
    cin>>stu[i].cgpa;
  }
Alphasort(stu,n);

    cout<<"\nDetails of students\n";
    for(int i=0;i<n;i++)
    {
      cout<<"Student "<<i+1<<endl;
      cout<<"Name:"<<stu[i].name<<endl;
      cout<<"Department:"<<stu[i].department<<endl;
      cout<<"Year of study:"<<stu[i].yr<<endl;
      cout<<"CGPA:"<<stu[i].cgpa<<endl;
      }
    return 0;
}
