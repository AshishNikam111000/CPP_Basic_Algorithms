/*
rmstrong number C++ program: c++ programming code to check whether a number is armstrong or not.
A number is armstrong if the sum of cubes of individual digits of a number is equal to the number 
itself. For example 371 is an armstrong number as 33 + 73 + 13 = 371.
Some other armstrong numbers are: 0, 1, 153, 370, 407.
*/

#include <iostream.h>
 
main()
{
   int number, sum = 0, temp, remainder;
 
   cout<<"Enter a number\n";      
   cin>>number;
 
   temp = number;
 
   while( temp != 0 )
   {
      remainder = temp%10;
      sum = sum + remainder*remainder*remainder;
      temp = temp/10; 
   }
 
   if ( number == sum )
      cout<<"Entered number is an armstrong number.";
   else
      cout<<"Entered number is not an armstrong number.";         
 
   return 0;
}
