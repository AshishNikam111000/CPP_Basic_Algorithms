/*
Swapping of two numbers without third variable
You can also swap two numbers without using temp or temporary or third variable.
*/

#include <iostream.h>
 
int main()
{
   int a, b;
 
   cout<<"Enter two integers to swap\n";
   cin>>a>>b;
 
   a = a + b;
   b = a - b;
   a = a - b;
 
   cout<<"a = "<<a<<endl<<"b = "<<b;
   return 0;
}
