/*
Amoeba multiplication
The Environmental Eco Club has discovered a new Amoeba that grows in the order of a Fibonacci series every month. 
They are exhibiting this amoeba in a national conference. They want to know the size of the amoeba at a particular time
instant. If a particular month’s index is given, write a program to display the amoeba’s size. For Example, the size of 
the amoeba on month 1, 2, 3, 4, 5, 6,... will be 0, 1, 1, 2, 3, 5, 8.... respectively.
INPUT & OUTPUT FORMAT:

The input is an integer which denotes the count of the month.

The output is an integer denoting the amoeba size.

Refer the sample output for formatting.

SAMPLE INPUT:

7

SAMPLE OUTPUT:

8

*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a,b,c,n;
  a=0;
  b=1;
  std::cin>>n;
  if(n==1){
    std::cout<<0;
  }
  if(n==2){
    std::cout<<1;
  }
  while(n-2){
    c=a+b;
    a=b;
    b=c;  
    n--;
  }
  std::cout<<c;
}
