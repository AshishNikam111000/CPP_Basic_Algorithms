/*
This c++ program add n numbers which will be entered by the user.
Firstly user will enter a number indicating how many numbers user wishes
to add and then user will enter n numbers */
#include <iostream.h>
 
int main()
{
   int n, sum = 0, c, value;
 
   cout<<"Enter the number of integers you want to add\n";
   cin>>n;
 
   cout<<"Enter "<<n<<" Integers\n" ; 
   for (c = 1; c <= n; c++)
   {
      cin>>value;
      sum = sum + value;
   }
 
   cout<<"Sum of entered integers = \n"<<sum; 
   return 0;
}
