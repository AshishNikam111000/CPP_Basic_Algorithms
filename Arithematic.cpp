/*
C program to perform basic arithmetic operations i.e. addition , subtraction, multiplication
and division of two numbers.Numbers are assumed to be integers and will be entered by the user. */

#include <iostream.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   cout<<"Enter two integers\n";
   cin>>first>>second;
 
   add      = first + second;
   subtract = first - second;
   multiply = first * second;
   divide   = first / (float)second;   //typecasting
 
   cout<<"Sum = \n"<<add;
   cout<<"Difference = \n"<<subtract;
   cout<<"Multiplication = \n"<<multiply;
   cout<<"Division = \n"<<divide;
 
   return 0;
}
