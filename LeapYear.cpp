/*C++ program to check leap year: C++ code to check leap year, year will be entered by the user.*/

#include <iostream.h>
 
int main()
{
  int year;
 
  cout<<"Enter a year to check if it is a leap year\n";
  cin>>year;
 
  if ( year%400 == 0)
    cout<<year<<" is a leap year.\n";
  else if ( year%100 == 0)
    cout<<year<<" is not a leap year.\n";
  else if ( year%4 == 0 )
    cout<<year<<" is a leap year.\n";
  else
    cout<<year<<" is not a leap year.\n";
 
  return 0;
}
