/*
Digit root of a given number
Write a program to find the repeated sum of digits of a number until it becomes a single-digit number.
Input Format:

The input contains an integer which denotes 'n'

Output Format:

Print the single digit number

Sample Input

88

Sample Output

7

Explanation:

Step 1: 8+8 = 16

Step 2: 1+6 = 7

sum of digits of a number until it becomes a single-digit number which is 7 here.
*/


#include<iostream>
int dr(int n){
  if(n<=9){
    return n;
  }
  else{
    n= n% 10 +dr( n/ 10 );
   return dr( n); 
  }
}
int main(){
  int n;
  std::cin>>n;
  int p=dr(n);
  std::cout<<p;
}
