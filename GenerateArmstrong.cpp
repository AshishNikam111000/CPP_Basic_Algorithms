/* C++ program to generate and print armstrong numbers  */

#include<iostream.h>
#include<conio.h>
 
main()
{
   int r;
   long number = 0, c, sum = 0, temp;
 
   cout<<"Enter the maximum range upto which you want to find armstrong numbers ";
   cin>>number;
 
   cout<<"Following armstrong numbers are found from 1 to "<<number<<endl;
 
   for( c = 1 ; c <= number ; c++ )
   {
      temp = c;
      while( temp != 0 )
      {
         r = temp%10;
         sum = sum + r*r*r;
         temp = temp/10;
      }
      if ( c == sum )
         cout<<c<<endl;
      sum = 0;
   }
 
   getch();
   return 0;
}
