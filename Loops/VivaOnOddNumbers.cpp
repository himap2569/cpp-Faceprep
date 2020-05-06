/*
Viva on odd numbers
A maths teacher asks her students to give 3 examples for positive odd numbers. When the student specifies a correct answer, 
his/her score is incremented by 1. When the student specifies a positive even number, his/her score is decremented by 0.5. 
When the student specifies a negative number, he/she will not be given any more chances to correct his or her mistake and
his/her score will be decremented by 1. So a student's turn comes to an end when he/she has correctly specified 3 positive 
odd numbers or when the student has specified a negative number. Some students didn't know the difference between odd numbers 
and even numbers and they made many mistakes and so it was difficult for the teacher to maintain the scores. The teacher asks 
for your help. Can you please help her by writing a program to calculate the score?
INPUT & OUTPUT FORMAT:

Input consists of a list of integers.

The output consists of a single line. The score needs to be corrected to 1 decimal place.

[For this exercise, don't worry about duplicate odd numbers. Even if the students specify the same odd number thrice,
it is accepted].

SAMPLE INPUT & OUTPUT 1:

1

3

5

3.0

SAMPLE INPUT & OUTPUT 2:

1

2

5

6

7

2.0
*/


#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n,count;
  float score=0.0;
    while(count!=3){
      std::cin>>n;
      if(n%2!=0 && n>0){
        score++;
        count++;
      }
      if(n>0 && n%2==0){
        score-=0.5;
      }
      if(n<0){
        score--;
        break;
      }
    }
  std::cout<<score;
}
