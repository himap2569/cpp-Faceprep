/*
Dollars & Cents
Write a C++ program to add two dollars and cents.
INPUT & OUTPUT FORMAT:

Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.

SAMPLE INPUT:

30

10

140

99

SAMPLE OUTPUT:

171

9
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int d1,d2,c1,c2,t,d,r;
  std::cin>>d1;
  std::cin>>c1;
  std::cin>>d2;
  std::cin>>c2;
  t=d1+d2;
  c1=c1+c2;
  r=c1;
  if(c1>100){
    r=c1%100;
    d=c1/100;
  }
  
  t+=d;
  std::cout<<t<<"\n";
  std::cout<<r;
}
