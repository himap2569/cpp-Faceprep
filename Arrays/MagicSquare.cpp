/*
Magic square
A magic square is an arrangement of numbers (usually integers) in a square grid, there numbers in the forward and backward
main diagonals, all add up to the same number. Write a program to find whether a given matrix is a magic square or not.
Input Format:

The input consists of (n*n+1) integers. 

The first integer corresponds to the number of rows/columns in the matrix. 

The remaining integers correspond to the elements in the matrix. 

The elements are read in row-wise order, the first row first, then second row and so on. 

Assume that the maximum value of m and n is 5.

Output Format:

Print yes if it is a magic square. Print no if it is not a magic square.

Sample Input:

2

4 5

5 4

Sample Output:

No


*/
#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int p;
  std::cin>>p;
  int x=0,y=p-1;
  int m=0,t=0;
  int a[p][p];
  for(int i=0;i<p;i++){
      for(int j=0;j<p;j++){
       std::cin>> a[i][j];
        if(i==j){
          m+=a[i][j];
      }
  }
  }
  while(y!=0){
    t+=a[x][y];
    x++;
    y--;
  }
    if(m==t){
      std::cout<<"Yes";
    }
    else{
      std::cout<<"No";
    }
  
}
