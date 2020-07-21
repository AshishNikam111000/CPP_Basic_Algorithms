/*
This C++ program prints transpose of a matrix.
It is obtained by interchanging rows and columns of a matrix.
For example if a matrix is
1 2
3 4
5 6
then transpose of above matrix will be
1 3 5
2 4 6
When we transpose a matrix then the order of matrix changes, but for a square matrix order remains same.
*/

#include<iostream.h>
#include<conio.h>
main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
 
   cout<<"Enter the number of rows and columns of matrix ";
   cin>>m>>n;
   cout<<"Enter the elements of matrix \n";
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         cin>>matrix[c][d];
      }
   }
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         transpose[d][c] = matrix[c][d];
      }
   }
 
   cout<<"Transpose of entered matrix :-\n";
 
   for( c = 0 ; c < n ; c++ )
   {
      for( d = 0 ; d < m ; d++ )
      {
         cout<<"  "<<transpose[c][d];
      }  
      cout<<endl;
   }
  getch();
   return 0;
}
