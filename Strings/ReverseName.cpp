/*
Reverse your friend's name
Your friend wants to see the pronunciation of his/ her name when it gets reversed. Help him/ her to find the reversed
string using program.

*/

#include<iostream>
#include<string>
int main() 
{ 
//Type your code here
  std::string str;
  std::getline(std::cin,str);
  for(std::string::reverse_iterator i=str.rbegin();i<str.rend();i++){
    std::cout<<*i;   
  }
}
