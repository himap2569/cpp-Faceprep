/*
Remove character except alphabets
In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word. 
So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain both 
uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program
*/

#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  std::string s;
  std::getline(std::cin,s);
  int k=0;
  for (int i = 0; i < s.size(); i++) 
  {
   if (s[i] < 'A' || s[i] > 'Z' && 
            s[i] < 'a' || s[i] > 'z')  
        {    
            s.erase(i, 1);  
            i--; 
        } 
  }
   std::cout<<s;
}
