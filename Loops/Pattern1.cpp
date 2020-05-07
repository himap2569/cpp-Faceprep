/*
Pattern I
Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3 
44 
555 
6666 
6666 
555 
44 
3
*/

#include<iostream>
int main(){
  int n;
  std::cin>>n;
  for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
      std::cout<<n;
    }
    std::cout<<"\n";
    n++;
  }
  int i=4,j;
  n=n-1;
  for(int i=4;i>=1;i--){
    for(int j=i;j>=1;j--){
      std::cout<<n;
    }
    n--;
    std::cout<<"\n";
  }
  return 0;
  
  
  
}
