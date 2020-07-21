/*This code checks whether an input alphabet is a vowel or not.
Both lower-case and upper-case are checked.*/

#include <iostream.h>
 
main()
{
  char ch;
 
  cout<<"Enter a character\n";
  cin>>ch;
 
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    cout<<ch <<" is a vowel.\n";
  else
    cout<<ch<< "is not a vowel.\n";
 
  return 0;
}
