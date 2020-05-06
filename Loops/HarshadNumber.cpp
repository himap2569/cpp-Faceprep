/*
Harshad Number
Write a C++ program to find whether the given number is a Harshad number or not. Note that Harshard number is an integer that is 
divisible by the sum of its digits.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

SAMPLE INPUT:

1729

SAMPLE OUTPUT:

Harshad Number
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int t,n,s=0;
  std::cin>>n;
  t=n;
  if(t==0){
    s=1;
  }
  while(t){
  	s+=t%10;
    t=t/10;
  }
  if(n%s==0){
    std::cout<<"Harshad Number";
  }
  else{
    std::cout<<"Not Harshad Number";
  }
}
