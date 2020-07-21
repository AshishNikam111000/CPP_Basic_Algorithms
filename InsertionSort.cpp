/* 
Insertion sort in C++: C++ program for insertion sort to sort numbers.
This code implements insertion sort algorithm to arrange numbers of an array in ascending order.
With a little modification it will arrange numbers in descending order. 
*/
 
#include<iostream.h> 
#include <conio.h>

int main()
{
  int n, array[1000], c, d, t;
 
  cout<<"Enter number of elements\n";
  cin>>n;
 
  cout<<"Enter Elements";
 
  for (c = 0; c < n; c++) {
    cin>>array[c];
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) 
    {
      t   = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
       d--;
    }
  }
 cout<<"Sorted list in ascending order:\n";
 
  for (c = 0; c <= n - 1; c++) {
    cout<<array[c]<<endl;
  }
  getch();
  return 0;
}
