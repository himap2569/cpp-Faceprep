/*
Kaprekar number
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. If the resultant sum 
is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar
number as 2972 = 88209 & 88 + 209 = 297 Write a program to find whether the given number is a Kaprekar number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

Refer sample output for details.

SAMPLE INPUT & OUTPUT:

9

Kaprekar Number
*
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n,t=0,d=0,r=0,m=1,p=0,a=0,b=0,s=0,q=0;
  std::cin>>n;
  q=n*n;
  p=n*n;
  t=n*n;
  while(t){
    d++;
    t=t/10;
  }
  if(d%2==0){
    r=d/2;
    while(r){
      m*=10;
      r--;
    }
    a=q%m;
    q-=a;
    b=q/m;
    s=a+b; 
}
    if(d%2!=0){
    r=d/2;
    while(r){
      m*=10;
      r--;
    }
    m*=10;
    a=q%m;
    q-=a;
    b=q/m;
    s=a+b; 
}
  if(s==n){
    std::cout<<"Kaprekar Number";
  }
  else{
    std::cout<<"Not a Kaprekar Number";
  }
  return 0;
}
