/*
Treasure Finder
Lucy and Tina are close friends. They both are studying in the same school. Now they are on their summer vacation. As they are bored, they ask their parents to take them to an exhibition. There Lucy and Tina play a game. In this game, there are three boxes with some number written on their top. There is a treasure in one of the three boxes and the treasure is present in the box with the second largest number on its top. Also, to open the box, they need to decode the correct code of this box. The clue given to them to find the code is that it is the largest number which divides all the three given numbers. So, now help Lucy and Tina to decode the code.
INPUT FORMAT:

Input consists of three integers. First input corresponds to the number of the first box. Second input corresponds to the number of the second box. Third input corresponds to the number of the third box.

SAMPLE INPUT:

2

4

6

SAMPLE OUTPUT:

The treasure is in the box which has number 4.

The code to open the box is 2.
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int a,b,c,max,min,t;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
    int g=1;
  if(a>b && a>c){
    max=a;
    if(b>c){
      t=b;
      min=c;
    }
    else {
      t=c;
      min=b;
    }
  }
  if(b>a && b>c){
    max=b;
    if(a>c){
      t=a;
      min=c;
    }
    else{
      t=c;
      min=a;
    }
  }
  if(c>a && c>b){
    max=c;
    if(b>a){
      t=b;
      min=a;
    }
    else {t=a;
    min=b;}
  }
  std::cout<<"The treasure is in box which has number "<<t<<"\n";
for(int i=1;i<=min;i++){
  if(a%i==0 && b%i==0 && c%i==0 && g<i){
    g=i;
  }
}
  std::cout<<"The code to open the box is "<<g;
}
