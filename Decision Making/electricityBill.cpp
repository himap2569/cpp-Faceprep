/*
Electricity Bill
Electricity board has decided to charge rupees based on the units consumed by a particular home. If the units consumed is 
less than or equal to 200, the cost for one unit is 0.5. If the unit is less than or equal to 400, the cost for one unit is 
0.65 and Rs.100 extra charge. If the unit is less than or equal to 600, the cost for one unit is 0.80 and Rs.200 extra charge.
If the unit is greater than 600 the cost for one unit is 1.25 and Rs.425 extra charge. You need to now calculate the electricity
bill based on the units consumed (given input).
INPUT & OUTPUT FORMAT:

Input consists of one integer.

This corresponds to the units consumed.

The output consists of one integer.

This corresponds to the electricity bill in rupees.

SAMPLE INPUT:

200

SAMPLE OUTPUT:

Rs.100
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int u,p;
  cin>>u;
  if(u<=200){
    p=u*0.5;
  }
  else if(u<=400){
    p=0.65*u;
    p+=100;
  }
  else if(u<=600){
    p=u*0.80;
    p+=200;
  }
  else{
    p=u*1.25;
    p+=425;
}
  std::cout<<"Rs."<<p;
  
}
