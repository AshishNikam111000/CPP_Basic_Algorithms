/*
C++ code to remove spaces  from a string, For example consider the string
"Sanjeev Sharma"
There is one space in this string, so our program will print a string
"SanjeevSharma". It will remove space when they occur in string anywhere.
*/

#include <iostream.h>
#include<conio.h>
 
int main()
{
   char text[100], blank[100];
   int c = 0, d = 0;
 
   cout<<"Enter some text";
   gets(text);
 
   while (text[c] != '\0')
   {
      if (!(text[c] == ' ')) {
        blank[d] = text[c];
        d++;
      }
      c++;
   }
 
   blank[d] = '\0';
 
   cout<<"Text after removing blanks  "<<blank;
   getch();
   return 0;
}
