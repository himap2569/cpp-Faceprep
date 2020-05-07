/*
Series IV
Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34
*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n;
  std::cin>>n;
  int i=1;
  while(n){
    if(i%2!=0){
    std::cout<<(i*i)-1<<" ";
    }
    else {std::cout<<(i*i)-2<<" ";}
    n--;
    i++;
  }
  return 0;
}
