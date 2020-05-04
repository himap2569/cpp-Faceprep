/*
Mango tree - I
Dora is so much interested in gardening and hence she plants more trees in her garden. She plants trees in a rectangular fashion with the order of rows and columns and numbers the trees in a row-wise order. She planted the mango tree only in the 1st row, 1st column and last column. So, given the tree number, your task is to find out whether the given tree is a mango tree or not? Now, write a program to check whether the given number denotes a mango tree or not.
INPUT FORMAT:

Input consists of 3 integers.

The first input denotes the number of rows.

The second input denotes the number of columns.

The third input denotes the tree number.

OUTPUT FORMAT:

If the given number is a mango tree, print "Yes". Otherwise, print "No"

Refer the sample output for formatting.

SAMPLE INPUT:

5

5

11

SAMPLE OUTPUT:

Yes

*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a,b,n,flag;
  std::cin>>a;
  std::cin>>b;
  std::cin>>n;
  if(n>=1 && n<=b){
    flag=1;
  }
  if(n>=((a*b)-a+1) && n<=a*b){
    flag=1;
}
  if(n%b==0 || (n-1)%b==0){
    flag=1;
  }
 if(flag==1){
   std::cout<<"Yes";
 }
  else{
    std::cout<<"No";
  }
  return 0;
}
