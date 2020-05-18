/*
Add two distances in inch-feet system
Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7"
*/
#include<iostream>
using namespace std;
struct measure{
  int ft;
  float inch;
}d1,d2,res;
int main()
{
  //Type your code here.
  std::cin>>d1.ft>>d1.inch;
   std::cin>>d2.ft>>d2.inch;
  res.inch=d1.inch+d2.inch;
  res.ft=d1.ft+d2.ft;
 if(res.inch>12.0){
    res.inch-=12.0;
    ++res.ft;}
  std::cout<<res.ft<<"'-"<<res.inch<<"\"";
}
