/*
Sum of Zig-Zag
Write a C++ program to find the sum of Zig-Zag pattern in a given matrix. 
FUNCTIONAL REQUIREMENTS: int sumZigZag(int, int, int **);
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT:

3

3

1 2 3

4 5 6

7 8 9

SAMPLE OUTPUT:

Sum of Zig-Zag pattern is 35
*/

#include<iostream>
using namespace std;
int sumZigZag(int r, int c, int **a){
  int s=0,x=0,y=c-1;
  for(int j=0;j<=c-2;j++){
    s+=a[0][j];
  }
  while(y>=0){
    s+=a[x][y];
    x++;
    y--;   
  }
  for(int j=1;j<c;j++){
    s+=a[r-1][j];
  }

  return s;
}
int main()
{
  //Type your code here.
  int r,c;
  std::cin>>r>>c;
  int **a;
  a= new int*[r];
  for(int i=0;i<r;i++)
    a[i]=new int[c];
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      std::cin>>a[i][j];
    }
  }
  std::cout<<"Sum of Zig-Zag pattern is "<<sumZigZag(r,c,a);
  
  
}
