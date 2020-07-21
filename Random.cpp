/*
C++ programming code using random function(Turbo C++ compiler only)
*/

#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
 
main()
{
   int n, max, num, c;
 
   cout<<"Enter the number of random numbers you want ";
   cin>>n;
 
   cout<<"Enter the maximum value of random number ";
   cin>>max;
 
   cout<<n<<" random numbers from 0 to "<<max <<" are ";
   randomize();
 
   for ( c = 1 ; c <= n ; c++ )
   {
      num = random(max);
      cout<<endl<<num;
 
   }
 
   getch();
   return 0;
}
