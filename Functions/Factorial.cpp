/*
Factorial
Write a program to compute the factorial of a number using recursion.
INPUT AND OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT

5

The factorial of 5 is 120
*/
#include<iostream>
int fact(int n){
  if(n<=1){
    return 1;
  }
  else return n*fact(n-1);
  
}
int main()
{
  //Type your code here.
  int n;
  std::cin>>n;
  int p=fact(n);
  std::cout<<"The factorial of "<<n<<" is "<<p;
  
}
