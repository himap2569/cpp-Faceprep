/*
College
Create a structure called College. struct College { char name[100]; char city[100]; int establishmentYear; 
float passPercentage; } Write a program to get the details of 'n' colleges and to display their details, sorted
by name in ascending order.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places.

SAMPLE INPUT & OUTPUT:

Enter the number of colleges

3

Enter the details of college 1

Enter name

ACE

Enter city

Coimbatore

Enter year of establishment

2000

Enter pass percentage

98.5

Enter the details of college 2

Enter name

BCE

Enter city

Erode

Enter year of establishment

1990

Enter pass percentage

89.45

Enter the details of college 3

Enter name

DCE

Enter city

Chennai

Enter year of establishment

2008

Enter pass percentage

97.35

Details of colleges

College 1

Name : ACE

City : Coimbatore

Year of establishment : 2000

Pass percentage : 98.50

College 2

Name : BCE

City : Erode

Year of establishment : 1990

Pass percentage : 89.45

College 3

Name : DCE

City : Chennai

Year of establishment : 2008

Pass percentage : 97.35
*/
#include<iostream>
#include<cstring>
using namespace std;
struct college{
   char name[100]; 
   char city[100]; 
   int establishmentYear; 
   float passPercentage;
}s;
void Alphasort(college *c,int n){
  int i,j;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(strcmp(c[i].name,c[j].name)>0){
        s=c[i];
        c[i]=c[j];
        c[j]=s;
      }
    }
  }
}
int main()
{
  //Type your code here.
  int n;
  std::cout<<"Enter the number of colleges"<<"\n";
  std::cin>>n;
  college c[n];
  for(int i=0;i<n;i++){
    std::cout<<"Enter the details of college "<<i+1<<"\n";
    std::cout<<"Enter name"<<"\n";
    std::cin>>c[i].name;
    std::cout<<"Enter city"<<"\n";
    std::cin>>c[i].city;
    std::cout<<"Enter year of establishment"<<"\n";
    std::cin>>c[i].establishmentYear;
    std::cout<<"Enter pass percentage"<<"\n";
    std::cin>>c[i].passPercentage;
}
  Alphasort(c,n);
  std::cout<<"Details of colleges"<<"\n";
  for(int i=0;i<n;i++){
    std::cout<<"College:"<<i+1<<"\n";
    std::cout<<"Name:"<<c[i].name<<"\n";
    std::cout<<"City:"<<c[i].city<<"\n";
    std::cout<<"Year of establishment:"<<c[i].establishmentYear<<"\n";
    std::cout<<"Pass percentage:"<<c[i].passPercentage<<"\n";
  }
}
