/*
Palindrome number in c: A palindrome number is a number such that if we reverse it,
it will not change. For example some palindrome numbers examples are 121, 212, 12321,
-454. To check whether a number is palindrome or not first we reverse it and then compare
the number obtained with the original, if both are same then number is palindrome otherwise not.
C++ program for palindrome number is given below.*/

#include<iostream.h>
 
int main()
{
   int n, reverse = 0, temp;
 
   cout<<"Enter a number to check if it is a palindrome or not\n";
   cin>>\n;
 
   temp = n;
 
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
 
   if ( n == reverse )
      cout<<n<<" is a palindrome number.\n";
   else
      cout<<n<<" is not a palindrome number.\n";
 
   return 0;
}
