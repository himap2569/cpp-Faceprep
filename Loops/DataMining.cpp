/*
Data mining
In the University examinations conducted during the past 5 years, the toppers registration numbers were 7126, 82417914, 7687 a
nd 6657. Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers. 
In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number. 
He termed the numbers that satisfy this property as Probable Topper Numbers. Now, write a program to find whether a given number
is a probable topper number or not.
INPUT & OUTPUT FORMAT:

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.

SAMPLE INPUT & OUTPUT:

143

Yes
*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n,d,e,i;
  std::cin>>n;
  while(n){
    if(i%2==0){
    d+=n%10;
     i++;
    }
    else{
      e+=n%10;
      i++;
    }
    n=n/10;
  }
  if(d==e){
    std::cout<<"Yes";
  }
  else{
    std::cout<<"No";
  }
return 0;
}
