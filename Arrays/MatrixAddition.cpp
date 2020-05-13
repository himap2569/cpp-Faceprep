/*
Matrix Addition
Raju has a square shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange 
the puzzle by changing the element of a row into a column element and column element into a row element without 
altering the shape of the puzzle. Help raju to solve this puzzle. 
FUNCTIONAL REQUIREMENTS: int** createArray(int,int); int getElement(int**,int,int); int addMatrix(int**,int**,int**,int,int);
Input Format:

Enter the row and column of a matrix Enter the matrix

Output Format:

Addition of a matrix

Sample Input:

2

2

1

2

3

4

1

2

3

4

Sample Output:

2 4

6 8
*/
#include<iostream>
using namespace std;
 int** createArray(int m,int n){
   int **a;
   a= new int*[m];
   for(int i=0;i<m;i++)
       a[i]=new int[n];
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       std::cin>>a[i][j];
     }
   }
   return a;
 }
  int getElement(int**a,int i,int j)
 {
     return a[i][j];
 }
  int ** addMatrix(int** a,int** b,int m,int n)
  {
      int **c;
      c=new int*[m];
      for(int i=0;i<m;i++){
          c[i]=new int[n];
      }
      int p,q;
    for(int i=0;i<m;i++){
        p=0;
        q=0;
        for(int j=0;j<n;j++){
            p=getElement(a,i,j);
            q=getElement(b,i,j);
            c[i][j]=(p+q);
        }
    }
    return c;
    
  }

 
int main()
{
  //Type your code here.
  int m,n;
  std::cin>>m>>n;
  int **a=createArray(m,n);
  int **b=createArray(m,n);
  int **c=addMatrix(a,b,m,n);
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       std::cout<<c[i][j]<<" ";
     }
     std::cout<<"\n";
   }
 
}
