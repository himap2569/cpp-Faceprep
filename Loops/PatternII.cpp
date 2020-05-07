/*
Pattern II
Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int j, k = 0; 
    for (int i=1; i<=n; i++) 
    { 
        if (i%2 != 0) 
        { 
            for (j=k+1; j<k+i; j++) 
                std::cout << j << "*"; 
            std::cout << j++ <<"\n";  
            k = j;     
        }
        else
        { 
            k = k+i-1; 
            for (j=k; j>k-i+1; j--) 
                std::cout << j << "*"; 
           std:: cout << j <<"\n";     
        } 
    }
  }
  

