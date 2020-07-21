/* C++ program for palindrome without using string functions */
#include <iostream.h>
#include <conio.h>
 
main()
{
   char text[100];
   int begin, middle, end, length = 0;
   cout<<" Enter  a String ";
   gets(text);
 
   while ( text[length] != '\0' )
      length++;
 
   end = length - 1;
   middle = length/2;
 
   for( begin = 0 ; begin < middle ; begin++ )
   {
      if ( text[begin] != text[end] )
      {
         cout<<"Not a palindrome.\n";
         break;
      }
      end--;
   }
   if( begin == middle )
      cout<<endl<<"Palindrome.";
 getch();
   return 0;
}
