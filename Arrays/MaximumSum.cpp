/*
Greatest sum
Seenu have a fruit shop. He is arranged the some set of fruits are column and row wise. Seenu needs to find which row and
column has maximum number of fruits. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 6 8

2 5 1

3 8 2

Sum of rows is 15 8 13

Row 1 has maximum sum

Sum of columns is 6 19 11

Column 2 has maximum sum
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int r,c;
  std::cin>>r>>c;
  int s=0,t=0;
  int a[r][c];
  int rows[r];
  int cols[c];
  for(int i=0;i<r;i++){
    s=0;
    for(int j=0;j<c;j++){
      std::cin>>a[i][j];
      s+=a[i][j];
    }
    rows[i]=s;
  }
  int k=0;
  while(k<c){
  for(int p=0;p<r;p++){
    t+=a[p][k];
  }
  cols[k]=t;
  t=0;
  k++;
      }
  int max=0,index=0;
  std:cout<<"Sum of rows is ";
  for(int i=0;i<r;i++){
    std::cout<<rows[i]<<" ";
    if(max<rows[i]){
      max=rows[i];
    index=i+1;}
  }
  std::cout<<"\n";
  std::cout<<"Row "<<index<<" has maximum sum"<<"\n";
  max=0;
  index=0;
  std::cout<<"Sum of columns is ";
  for(int i=0;i<c;i++){
    std::cout<<cols[i]<<" ";
    if(max<cols[i]){
      max=cols[i];
    index=i+1;}
  }
  std::cout<<"\n";
  std::cout<<"Column "<<index<<" has maximum sum"<<"\n";
}
