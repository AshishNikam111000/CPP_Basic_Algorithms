/*
Linear search in C++ programming: The following code implements linear search ( Searching algorithm )
which is used to find whether a given number is present in an array and if it is present then at
what location it occurs.It is also known as sequential search. It is very simple and works as follows:
We keep on comparing each element with the element to search until the desired element is found or
list ends.
*/
#include<iostream.h>
 
main()
{
   int array[100], search, c, number;
 
   cout<<"Enter the number of elements in array\n";
   cin>>number;
 
   cout<<"Enter "<<number<<" numbers";
 
   for ( c = 0 ; c < number ; c++ )
      cin>>array[c];
 
   cout<<"Enter the number to search\n";
   cin>>search;
 
   for ( c = 0 ; c < number ; c++ )
   {
      if ( array[c] == search )     /* if required element found */
      {
         cout<<search<<" is present at location "<<c+1;
	 break;
      }
   }
   if ( c == number )
      cout<<search<<" is not present ";  
 
   return 0;
}
