/*
This program prints length of string, for example consider the string "C++ programming" 
it's length is 15. Null character is not counted when calculating string length.
To find string length we use strlen function of string.h.
*/
#include<iostream.h>
#include<string.h>
 
main()
{
   char a[100];
   int length;
 
   cout<<"Enter a string to calculate it's length\n";
   gets(a);
 
   length = strlen(a);
 
   cout<<"Length of entered string is = "<<length;
 
   return 0;
}
