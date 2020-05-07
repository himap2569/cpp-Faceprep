/*
Patternu IV
Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556
*/
#include <iostream>
using namespace std;
int main() {
    // Type your code here
  int n;
  std::cin>>n;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      for(int j=1;j<=n-1;j++){
        std::cout<<i;
      }
      std::cout<<i+1;
    }
    else{
      std::cout<<i+1;
      for(int j=2;j<=n;j++){
        std::cout<<i;
      }
    }
    std::cout<<"\n";
    
  }
    return 0;
}
