/*
Online shopping
Arun wants to buy a shirt. As he is very lazy, he decided to buy the shirt online. He chooses a shirt in Flipkart and is surprised to see the same shirt in Amazon and Snapdeal as well. So he decided to buy the shirt from the website which offers it at the least price. The price of the shirt, discount % and the shipping charges of all three websites have been given as input. Help him in calculating the price of the shirt in each website and decide which website has the lowest price.
INPUT & OUTPUT FORMAT:

Input consist of 9 integers. First three input corresponds to Flipkart details such as the amount of the shirt, discount offered and shipping charges. Next three input corresponds to Snapdeal details such as the amount of shirt, discount offered and shipping charge. Last three input corresponds to amazon details such as the amount of shirt, discount offered and shipping charge.

SAMPLE INPUT:

1000

50

50

900

50

70

800

10

200

SAMPLE OUTPUT:

In Flipkart: Rs.550

In Snapdeal: Rs.520

In Amazon: Rs.920

He will prefer Snapdeal
*/


#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int f1,f2,f3,s1,s2,s3,a1,a2,a3;
  std::cin>>f1;
  std::cin>>f2;
  std::cin>>f3;
  std::cin>>s1;
  std::cin>>s2;
  std::cin>>s3;
  std::cin>>a1;
  std::cin>>a2;
  std::cin>>a3;
  
  int fp,sp,ap;
  fp=((100-f2)*f1/100)+f3;
  sp=((100-s2)*s1/100)+s3;
  ap=((100-a2)*a1/100)+a3;
  
  string name;
  if(fp<=sp && fp<=ap){
    name="Flipkart";
  }
  else if(sp<=fp && sp<=ap){
    name="Snapdeal";
  }
  else{
    name="Amazon";
  }  
  std::cout<<"In Flipkart Rs."<<fp<<"\n";
   std::cout<<"In Snapdeal Rs."<<sp<<"\n";
   std::cout<<"In Amazon Rs."<<ap<<"\n";
   std::cout<<"He will prefer "<<name;

}
