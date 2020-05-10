/*
GCD of 2 Numbers
Write a program to compute GCD of 2 numbers using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

36

27

G.C.D of 36 and 27 = 9
*/
#include<iostream>
int gcd(int a,int b){
  if(a==0){
    return b;
  }
  else{
    return gcd(b%a,a);
  }
}
int main()
{
  //Type your code here.
  int a,b;
  std::cin>>a>>b;
  int p=gcd(a,b);
  std::cout<<"G.C.D of "<<a<<" and "<<b<<" = "<<p;
}
