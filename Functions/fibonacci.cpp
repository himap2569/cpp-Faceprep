/*
Fibonacci Series
Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the
Fibonacci Series are 0 and 1.
INPUT & OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

All text in bold corresponds to the input and the rest corresponds to output.

SAMPLE INPUT & OUTPUT:

5

The term 5 in the fibonacci series is 3
*/

#include<iostream>
int fib(int n){
 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
  
}
int main()
{
  //Type your code here.
  int n;
  std::cin>>n;
  int p=fib(n-1);
  std::cout<<"The term "<<n<<" in the fibonacci series is "<<p;
}
