/*Factorial program in c++: c++ code to find and print factorial of a number */
#include <iostream.h>
 
int main()
{
  int c, n, fact = 1;
 
  cout<<"Enter a number to calculate it's factorial\n";
  cin>>n;
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  cout<<"Factorial of "<<n<< " is "<<fact;
 
  return 0;
}
