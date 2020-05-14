/*
Special school
A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing the letters
backward or in reverse. Once special care is taken to correct this issue and once they are introduced to words, they
will start writing the words in the proper format. The teachers do not want to discourage the children at the start 
itself and they have decided to mark the words written in reverse also as correct. Can you please help the teacher in
correcting the answer sheets by writing a C++ program? Write a C++ program to check whether the second word is the
reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings. 

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.

Sample input &output

Excellent

tnellecxE

It is correct
*/

#include<iostream>
#include<string>
#include<bits/stdc++.h> 

using namespace std;
int main()
{
  //Type your code here.
  std::string a;
  std::getline(std::cin,a);
  std::string b;
  std::getline(std::cin,b);

  /*reverse(a.begin(),a.end());
  if(a==b){
    std::cout<<"It is correct";
  }
  else{
    std::cout<<"It is wrong";
  }*/
  
  int j=0,flag=0;
  for(std::string::reverse_iterator i=a.rbegin();i<a.rend();i++){
    if(*i!=b[j]){
      flag=1;
      break;
    }
    j++;
  }
 if(flag==1){std::cout<<"It is wrong";}
  else{std::cout<<"It is correct";
  }
  
    
}
