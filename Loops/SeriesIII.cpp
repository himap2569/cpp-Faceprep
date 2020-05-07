/*
Series III
Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

6 11 21 36 56 81
*/
#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int i=1;
  int p=6;
  while(n){
    std::cout<<p<<" ";
    p+=(5*i);
    i++;
    n--;
  }
 return 0; 
}
