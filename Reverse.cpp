/*
C++ Program to reverse a number :- This program reverse the number entered by the user
and then prints the reversed number on the screen. For example if user enter 123 as input
then 321 is printed as output. In our program we use modulus(%) operator to obtain the
digits of a number. To invert number look at it and write it from opposite direction
or the output of code is a number obtained by writing original number from right to left.
To reverse large numbers use long data type or long long data type if your compiler supports it,
if you still have large numbers then use strings or other data structure.  */
#include <iostream.h>
 
int main()
{
   int n, reverse = 0;
 
   cout<<"Enter a number to reverse\n";
   cin>>n;
 
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
 
   cout<<"Reverse of entered number is = "<<reverse;
 
   return 0;
}
