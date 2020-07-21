/*
This C++ program add two matrices i.e. compute the sum of two matrices and then print it.
Firstly user will be asked to enter the order of matrix ( number of rows and columns )
and then two matrices. For example if the user entered order as 2, 2 i.e. two rows and
two columns and matrices as
First Matrix :-
1 2
3 4
Second matrix :-
4 5
-1 5
then output of the program ( sum of First and Second matrix ) will be
5 7
2 9
*/

#include <iostream.h>
#include<conio.h> 
main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   cout<<"Enter the number of rows and columns of matrix ";
   cin>>m>>n;
   cout<<"Enter the elements of first matrix\n";
 
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin>>first[c][d];
 
   cout<<"Enter the elements of second matrix\n";
 
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
            cin>>second[c][d];
 
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = first[c][d] + second[c][d];
 
   cout<<"Sum of entered matrices:-\n";
 
   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
         cout<<" "<<sum[c][d];
 
      cout<<endl;
   }
 getch();
   return 0;
}
