/*
Cricket
Tom is crazy about cricket. He was watching India vs. Australia World cup final match. Australia won the toss and elected to bat first. They finished batting with a score of X. Next, India started to bat and scored Y runs in N number of balls. As Tom is very crazy, he wants to calculate the run rate and check whether there is a probability for India to win or not. Help him calculate the run-rate and check the probability.
INPUT FORMAT & OUTPUT FORMAT:

Input consists of 4 integers. First input corresponds to the total number of balls. Second input corresponds to the total number of runs. Third input corresponds to the number of runs scored. Fourth input corresponds to the number of balls bowled. First output corresponds to the total number of overs. Second output corresponds to the total number of overs finished. Third output corresponds to the current run rate. Fourth output corresponds to total run rate.

Overs: 50 Overs finished: 7.3 Current Run rate: 10.7 Total Run rate: 7.5 Eligible to Win

SAMPLE INPUT:

300

375

78

45

SAMPLE OUTPUT:

50

7.3

10.7

7.5

Eligible to Win
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  //Type your code here.
  int n,r,s,b;
  std::cin>>n;
  std::cin>>r;
  std::cin>>s;
  std::cin>>b;
  float k;
  k=(n/6);
  k=r/k;
  int o1;
  float o2,p,o3,u,v;
  o1=n/6;
  o2=b/6;
  p=(b%6)/10.0;
  o2+=p;
  o3=s/o2;
  u=o3;
  v=k;
 // std::cout<<u<<"   "<<v;
 // o3= ((float )((int)(o3 * 10))) / 10;
 // k= ((float )((int)(k* 10))) / 10;
  std::cout<<o1<<"\n";
  std::cout<<o2<<"\n";
  std::cout<<fixed<<setprecision(1)<<o3<<"\n";
  std::cout<<fixed<<setprecision(1)<<k<<"\n";
  if(k>o3){
    std::cout<<"Not Eligible to Win";
  }
  else{
  std::cout<<"Eligible to Win";
  }
    
}
