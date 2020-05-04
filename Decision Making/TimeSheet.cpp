/*
Time sheet
Jeevitha just started to work as a programming trainer for UIT's Placement Cell. She is paid Rs.100 an hour, with a few exceptions. She earns an extra Rs.15 an hour for any part of a day where she works for more than 8 hours, and an extra Rs.25 an hour for hours beyond 40 in any one week. Also, she earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. And there is no bonus for working more than 40 hours in a week. You'll be given the number of hours Jeevitha worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute her salary for the week.
INPUT & OUTPUT FORMAT:

Input consists of 7 integers less than or equal to 24 on separate lines

Print Jeevith's salary for a week.

SAMPLE INPUT:

0

8

8

8

10

6

0

SAMPLE OUTPUT:

4030
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int sun,mon,tue,wed,thurs,fri,sat,sum,sal;
  std::cin>>sun;
  std::cin>>mon;
  std::cin>>tue;
  std::cin>>wed;
  std::cin>>thurs;
  std::cin>>fri;
  std::cin>>sat;
  sum=sun+mon+tue+wed+thurs+fri;
  if(sun>0){
    sal=100*sun;
    sal+=0.5*(100*sun);  
    if(sun>8){
      sal+=(sun-8)*15;
    }
  }
  if(mon>0){
    sal+=100*mon;
    if(mon>8){
      sal+=(mon-8)*15;
    }
  }
  if(tue>0){
    sal+=100*tue;
    if(tue>8){
      sal+=(tue-8)*15;
    }
  }
  if(wed>0){
    sal+=100*wed;
    if(wed>8){
      sal+=(wed-8)*15;
    }
  }
  if(thurs>0){
    sal+=100*thurs;
    if(thurs>8){
      sal+=(thurs-8)*15;
    }
  }
  if(fri>0){
    sal+=100*fri;
    if(fri>8){
      sal+=(fri-8)*15;
    }
    
  }
 
  if(sat>0){
    sal+=100*sat;
    sal+=(0.25)*(100*sat);
    if(sat>8){
      sal+=(sat-8)*15;
    }
  }
  
  if((sum-sun-sat)>40){
    sal+=(sum-40)*(25);
  }

  std::cout<<sal;
}
