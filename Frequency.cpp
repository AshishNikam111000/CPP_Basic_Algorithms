/*
This program computes frequency of characters in a string i.e. which character is present
how many times in a string. For example in the string "code" each of the 
character 'c', 'o', 'd', and 'e' has occurred one time.
Only lower case alphabets are considered, other characters ( uppercase and special characters )
are ignored. You can easily modify this program to handle uppercase and special symbols.
*/

#include<iostream.h>
#include<string.h>
#include<conio.h>
 
main()
{
   char string[100], ch;
   int c = 0, count[26] = {0};
 
   cout<<"Enter a string\n";
   gets(string);
   
   while ( string[c] != '\0' )
   {
      
 
      if ( string[c] >= 'a' && string[c] <= 'z' ) 
         count[string[c]-'a']++;
 
      c++;
   }
 
   for ( c = 0 ; c < 26 ; c++ )
   {
      if( count[c] != 0 )
         cout<<string[c]<<" Character occurs  "<<count[c] <<"  times"<<endl;
   }
 getch();
   return 0;
}
