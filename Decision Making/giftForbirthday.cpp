/*
Gift for Birthday
Lucy is celebrating her 15th birthday. Her father promised her that he will buy her a new computer on her birthday 
if she solves the question asked by him. He asks Lucy to find out whether the year on which she was born is a leap year or not. 
Help her to solve this puzzle so that she celebrates her birthday happily. If her birth year is 2016 and it is a leap year 
display “2016 is a leap year.” Else display “2016 is not a leap year.”
INPUT & OUTPUT FORMAT:

Input consist of 1 integer.

Output consist of 1 string.

SAMPLE INPUT:

2016

SAMPLE OUTPUT:

2016 is a leap year
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int y;
  std::cin>>y;
  if(y%4==0 || (y%100==0 && y%400==0)){
   std::cout<<y<<" is a leap year";
  }
  else{
    std::cout<<y<<" is not a leap year.";
  }
}