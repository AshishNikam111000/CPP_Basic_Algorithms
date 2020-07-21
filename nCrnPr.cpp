/*
C++ program to find nCr and nPr: This code calculate nCr which is n!/(r!*(n-r)!) and nPr = n!/(n-r)!*/
#include<iostream.h>
 
long factorial(int);
long find_ncr(int, int);
long find_npr(int, int);
 
int main()
{
   int n, r;
   long ncr, npr;
 
   cout<<"Enter the value of n and r\n";
   cin>>n>>r;
 
   ncr = find_ncr(n, r);
   npr = find_npr(n, r);
 
   cout<<n<<" C "<<r <<endl <<ncr;
   cout<<n<<" P "<<r <<endl<<npr;
 
   return 0;
}
 
long find_ncr(int n, int r)
{
   long result;
 
   result = factorial(n)/(factorial(r)*factorial(n-r));
 
   return result;
}
 
long find_npr(int n, int r)
{
   long result;
 
   result = factorial(n)/factorial(n-r);
 
   return result;
} 
 
long factorial(int n)
{
   int c;
   long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
      result = result*c;
 
   return ( result );
}
