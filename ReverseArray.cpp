/*
C++ program to reverse an array :- This program reverses the array elements.
For example if a is an array of integers with three elements
such that
a[0] = 1
a[1] = 2
a[2] = 3
then on reversing the array will be
a[0] = 3
a[1] = 2
a[2] = 1
*/
#include <iostream.h>
 
int main()
{
   int n, c, d, a[100], b[100];
 
   cout<<"Enter the number of elements in array\n";
   cin>>n;
 
   cout<<"Enter the array elements\n";
 
   for (c = 0; c < n ; c++)
      cin>>a[c];
 
    
   cout<<"Reverse array is\n";
 
   for (c = n-1; c >=0; c--)
      cout<<a[c]<<endl;
 
   return 0;
}
