/*
This code will insert an element into an array, For example consider an array a[10]
having three elements in it initially and a[0] = 1, a[1] = 2 and a[2] = 3 and you want
to insert a number 45 at location 1 i.e. a[0] = 45, so we have to move elements one step
below so after insertion a[1] = 1 which was a[0] initially, and a[2] = 2 and a[3] = 3.
Array insertion does not mean increasing its size i.e array will not be containing 11 elements.
*/
#include <iostream.h>
#include <conio.h>
int main()
{
   int array[100], position, c, n, value;
 
   cout<<"Enter number of elements in array\n";
   cin>>n;
 
   cout<<"Enter  Elements\n";
 
   for (c = 0; c < n; c++)
      cin>>array[c];
 
   cout<<"Enter the location where you wish to insert an element\n";
   cin>>position;
 
   cout<<"Enter the value to insert\n";
   cin>>value;
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   cout<<"Resultant array is\n";
 
   for (c = 0; c <= n; c++)
      cout<<array[c]<<endl;
 getch();
   return 0;
}
