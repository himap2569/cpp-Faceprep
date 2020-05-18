/*
Complex number calculator
Ryan is appearing for a techathon that offers price money of 10K for the winner. Techathon has provided a platform where
an incomplete code will appear, and the participants have to complete it. Ryan got a program where he needs to create a 
complex calculator. Can you help Ryan win this competition?
The first line consists of a choice which is an integer to choose from 1 to 3. Choice 1 represents addition of two complex
numbers, 2 represents subtraction of two complex numbers and 3 represents the multiplication of two complex numbers.
*/

#include<iostream>
  struct complex{
    int r;
    int i;
  };
  complex addition(complex a, complex b){
    a.r+=b.r;
    a.i+=b.i;
    return a;
  }
  complex sub(complex a, complex b){
    a.r-=b.r;
    a.i-=b.i;
    return a;
  }
  complex mul(complex a, complex b){
    int p=((a.r*b.r)-(a.i*b.i));
    a.i=((a.r*b.i)+(a.i*b.r));
    a.r=p;
    return a;
      
  }
  void print(complex a){
    if(a.i>0){
      std::cout<<a.r<<"+"<<a.i<<"i";}
    else{
    std::cout<<a.r<<a.i<<"i";  
  }
  }
int main(){
  int ch;
  std::cin>>ch;
  complex a,b,c;
  std::cin>>a.r>>a.i>>b.r>>b.i;
if(ch==1){
  c=addition(a,b);
  print(c);
}
  else if(ch==2){
    c=sub(a,b);
    print(c);
  }
  else if(ch==3)
  {
    c=mul(a,b);
    print(c);}
  else std::cout<<"Invalid choice";
}
