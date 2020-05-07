/*
Series II
Write a program to generate the first 'n' terms of the following series 121, 225, 361,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

4

Sample Output:

121 225 361 529

*/
#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int a=11;
  while(n){
    std::cout<<a*a<<" ";
    a+=4;
    n--;
  }
  return 0; 
  
}
