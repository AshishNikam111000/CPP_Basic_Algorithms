/*
C++ program for selection sort to sort numbers.
This code implements selection sort algorithm to arrange numbers of an array in ascending order.
With a little modification it will arrange numbers in descending order.
*/
#include<iostream.h>
#include<conio.h>
int main()
{
   int array[100], n, c, d, position, swap;
 
   cout<<"Enter number of elements\n";
   cin>>n;
 
   cout<<"Enter Elements";
 
   for ( c = 0 ; c < n ; c++ )
      cin>>array[c];
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
 
   cout<<"Sorted list in ascending order:\n";
 
   for ( c = 0 ; c < n ; c++ )
      cout<<endl<<array[c];
 getch();
   return 0;
}
