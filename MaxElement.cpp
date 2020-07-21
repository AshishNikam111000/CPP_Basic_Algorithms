/*
This code find maximum or largest element present in an array.
It also prints the location or index at which maximum element occurs in array. */

#include <iostream.h>
 
int main()
{
  int array[100], maximum, size, c, location = 1;
 
  cout<<"Enter the number of elements in array\n";
  cin>>size;
 
  cout<<"Enter  "<<size<<" integers\n";
 
  for (c = 0; c < size; c++)
    cin>>array[c];
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }
 cout<<"Maximum element is present at location number "<<location<<" and it's value is ."<<maximum;
  return 0;
}
