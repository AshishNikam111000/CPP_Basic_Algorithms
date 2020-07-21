/*
C++ program to print Floyd's triangle:- This program prints Floyd's triangle.
Number of rows of Floyd's triangle to print is entered by the user.
First four rows of Floyd's triangle are as follows :-
1
2 3
4 5 6
7 8 9 10
It's clear that in Floyd's triangle nth row contains n numbers.
*/
#include <iostream.h>
#include<conio.h>
int main()
{
  int n, i,  c, a = 1;
 
  cout<<"Enter the number of rows of Floyd's triangle to print\n";
  cin>>n;
 
  for (i = 1; i <= n; i++)
  {
    for (c = 1; c <= i; c++)
    {
      cout<<" "<<a;
      a++;
    }
    cout<<endl;
  }
  getch();
  return 0;
}
