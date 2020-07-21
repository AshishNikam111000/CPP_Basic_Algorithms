/*
This code find Minimum or smallest element present in an array.
It also prints the location or index at which minimum element occurs in array. */

#include <iostream.h>
#include <conio.h>
int main()
{
  int array[100], minimum, size, c, location = 1;
 
  cout<<"Enter the number of elements in array\n";
  cin>>size;
 
  cout<<"Enter  "<<size<<" integers\n";
 
  for (c = 0; c < size; c++)
    cin>>array[c];
 
  minimum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] < minimum)
    {
       minimum  = array[c];
       location = c+1;
    }
  }
 cout<<"Minimum element is present at location number "<<location<<" and it's value is ."<<minimum;
 getch();
  return 0;
}
