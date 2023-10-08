#include<iostream>
using namespace std;
void add(float num1, float num2,int sum);
void subt(float num1, float num2,int minus);
void mult(float num1, float num2,int mul);
void add(float num1, float num2,int div);
main(){
int num1,num2,sum,mul,minus,div;
char op;
 cout<<"Enter Number1: ";
 cin>> num1;
 cout<<"Enter Number2: ";
 cin>> num2;
 cout<<"Enter Operator(+-,/,*): ";
cin>> op;
if(op == '+')
{
add(num1,num2,sum);
}
if(op == '-')
{
subt(num1,num2,minus);
}
if(op == '*')
{
mult(num1,num2,mul);
}
}
void add(float num1, float num2,int sum)
{

 sum= num1+num2;
cout<<"Sum: "<<sum;
 

}
void subt(float num1, float num2,int minus)
{

 minus= num1-num2;
cout<<"Sub: "<<minus;
 

}
void mult(float num1, float num2,float mul)
{

 mul= num1*num2;
cout<<"Sub: "<<mul;
 

}