/*
C++ program to add digits of a number: Here we are using modulus operator(%) to extract individual digits of number and adding them. */
#include <iostream.h>
 
int main()
{
   int n, sum = 0, remainder;
 
   cout<<"Enter an integer\n";
   cin>>n;
 
   while(n != 0)
   {
      remainder = n % 10;
      sum = sum + remainder;
      n = n / 10;
   }
 
   cout<<"Sum of digits of entered number = %d\n"<<sum;
 
   return 0;
}
