/* C++ program to print patterns of numbers and stars 
    *
   ***
  *****
 *******
*********
We have shown five rows above, in the program you will be asked to enter the numbers
of rows you want to print in the pyramid of stars. */

#include<iostream.h>
 
int main()
{
   int row, c, n, temp;
 
   cout<<"Enter the number of rows in pyramid of stars you wish to see ";
   cin>>n;
 
   temp = n;
 
   for ( row = 1 ; row <= n ; row++ )
   {
      for ( c = 1 ; c < temp ; c++ )
         cout<<" ";
 
      temp--;
 
      for ( c = 1 ; c <= 2*row - 1 ; c++ )
         cout<<"*";
 
      cout<<endl;
   }
 
   return 0;
}
