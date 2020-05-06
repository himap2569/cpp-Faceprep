/*
Chalk
Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squareroot(n) of its original size, 
she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of
the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?
INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given. Output corresponds to the number of days 
in which the given number of chalks will be used.

SAMPLE INPUT:\
16

SAMPLE OUTPUT:

21
*/

#include <iostream>
using namespace std;
int main()
{
int number=0, days, cycle=50;
float sqroot=1;
cin>>number;
while(cycle>0)
{
sqroot = (sqroot+(number/sqroot))/2;
--cycle;
}
days=number+(int(sqroot)+1);
cout<<int(days);
return 0;
}
