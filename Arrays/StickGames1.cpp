/*
Stick games I
After winning gold and silver in Indian Computing Olympiad 2014, Arun Gupta and Mani Iyer want to have some fun.
Now they are playing a game on a grid made of n horizontal and m vertical sticks. Let us assume a grid where, n = 3 
and m = 3. There are n + m = 6 sticks in total. There are n*m = 9 intersection points, numbered from 1 to 9. The
rules of the game are very simple. The players move in turns. Arun Gupta won gold, so he makes the first move. During 
his/her move, a player must choose any remaining intersection point and remove from the grid all sticks which pass
through this point. A player will lose the game if he cannot make a move (i.e. there are no intersection points remaining 
on the grid at his move). Assume that both players play optimally. Who will win the game? FUNCTIONAL REQUIREMENTS: void print(int);
Input Format:

The first line of input contains two space-separated integers, n, and m (1 ≤ n, m ≤ 100).

Output Format:

Print a single line containing "Arun Gupta" or "Mani Iyer" (without the quotes), depending on the winner of the game.

Sample Input:

 2 2

Sample Output:

 Mani Iyer
 */
 
 #include<iostream>
using namespace std;
void fun(int *a){
  if(a[0]<a[1]){
    if(a[0]%2!=0){
      std::cout<<"Arun Gupta";
    }
    else{
      std::cout<<"Mani Iyer";
    }
  }
  else{
    if(a[1]%2!=0){
      std::cout<<"Arun Gupta";
    }
    else{
      std::cout<<"Mani Iyer";
    }
}
}
int main()
{
  //Type your code here.
  int a[2];
  for(int i=0;i<2;i++){
    std::cin>>a[i];
  }
  fun(a);
  
}
