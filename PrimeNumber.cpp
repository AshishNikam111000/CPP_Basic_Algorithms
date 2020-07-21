/*
Prime number program in C++: C++ program for prime number, this code prints prime numbers
using C++ programming language. To check whether a number is prime or not see another code below.
Prime number logic: a number is prime if it is divisible only by one and itself.
Remember two is the only even and also the smallest prime number.
First few prime numbers are 2, 3, 5, 7, 11, 13, 17....etc.
Prime numbers have many applications in computer science and mathematics.
A number greater than one can be factorized into prime numbers, For example 540 = 22*33*51
*/
#include<iostream.h>
 
int main()
{
   int n, i = 3, count, c;
 
   cout<<"Enter the number of prime numbers required\n";
   scanf("%d",&n);
 
   if ( n >= 1 )
   {
      cout<<"First "<<n<<" prime numbers are :\n";
      cout<<"2"<<endl;
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         cout<<endl<<i;
         count++;
      }
      i++;
   }         
 
   return 0;
}
