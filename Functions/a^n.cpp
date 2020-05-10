/*
Compute a^n
Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications

SAMPLE INPUT & OUTPUT:

Enter the value of a

2

Enter the value of n

8

The value of 2 power 8 is 256
*/

#include<iostream>
using namespace std;
int pow(int a,int n){
  if(n==0){
    return 1;
  }
  else return n*pow(a,n-1);
  
}
int main()
{
  //Type your code here.
  int a,n;
  std::cout<<"Enter the value of a\n";
  std::cin>>a;
  std::cout<<"Enter the value of n\n";
  std::cin>>n;
  int p=pow(a.n);
  std::cout<<"The value of "<<a<<" power "<<n<<" is "<<p;
  
}
