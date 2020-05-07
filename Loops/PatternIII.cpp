/*
Pattern III
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1 
2*2 
3*3*3 
4*4*4*4 
5*5*5*5*5 
5*5*5*5*5 
4*4*4*4 
3*3*3 
2*2 
1
*/
#include<iostream>
int main(){
  int n;
  std::cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i-1;j++){
      std::cout<<i<<"*";}
    std::cout<<i<<"\n";
  }
  
   for(int i=n;i>=1;i--){
    for(int j=i-1;j>=1;j--){
      std::cout<<i<<"*";}
    std::cout<<i<<"\n";
  }
  
  
  
}
