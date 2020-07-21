/* Fibonacci Series  */
#include<iostream.h>
#include<conio.h>
 
int main()
{
   int n, first = 0, second = 1, next, c;
 
   cout<<"Enter the number of terms\n";
   cin>>n;
 
   cout<<"First "<<n<<" terms of Fibonacci series are :-\n";
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout<<next<<endl;
   }
 getch();
   return 0;
}
