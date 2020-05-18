/*
Difference Between Two Time Periods
Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24 

8 15 23                                            

SAMPLE OUTPUT:                                                                        

4:0:1
*/
#include<iostream>
using namespace std;
struct time{
  int hr;
  int min;
  int sec;
}s1,s2,res;
int main()
{
  //Type your code here.
  int h,m,s;
  std::cin>>s1.hr>>s1.min>>s1.sec;
  std::cin>>s2.hr>>s2.min>>s2.sec;
  if(s1.sec<s2.sec){
    s1.sec+=60;
    s2.min+=1;}
   res.sec=s1.sec-s2.sec;
  if(s1.min<s2.min){
    s1.min+=60;
    s2.hr+=1;}
   res.min=s1.min-s2.min;
   res.hr=s1.hr-s2.hr;
  std::cout<<res.hr<<":"<<res.min<<":"<<res.sec;
}
