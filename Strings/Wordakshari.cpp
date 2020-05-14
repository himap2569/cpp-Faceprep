/*
WORDAKSHARI
Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari.
The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used
by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of 
elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. The following
rules need to be followed while playing this game. (ii) All other words have to begin with the last letter of the previous 
word (iii) No words can be repeated. write a program to print the wordakshari chain.
Input Fromat:

Input consists of n+1 lines.

The first n lines contain strings corresponding to the words in the chain.

The last line of input contains the string #### to mark the end of input.

Output Format:

The output consists of the valid wordakshari chain.

The first word can begin with any letter.

Sample Input:

architect

tailor

referee

electrician

nurse

blacksmith

####

Sample Output:

architect

tailor

referee

electrician

nurse
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
  //Type your code here.
  std::string s;
  std::string t;
  std::getline(std::cin,s);
  std::cout<<s<<"\n";
  int i;
  char l;
  while(1){
    std::getline(std::cin,t);
    i=s.size();
    char k=s[i-1];
    if(t=="####") break;
    l=t[0];
    if(l==k) std::cout<<t<<"\n";
    if(l!=k) break;
    s.assign(t);
  
}
}
