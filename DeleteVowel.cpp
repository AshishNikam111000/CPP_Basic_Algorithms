/*
C++ program to remove or delete vowels from a string, if the input string is
"Sanjeev" then output will be "Snjv". In the program we create a new string
and process entered string character by character, and if a vowel is found 
it is not added to new string otherwise the character is added to new string,
after the string ends we copy the new string into original string.
Finally we obtain a string without any vowels.
*/
#include <iostream.h>
#include<conio.h>
#include <string.h>
 
int check_vowel(char);
 
int main()
{
  char s[100], t[100];
  int i, j = 0;
 
  cout<<"Enter a string to delete vowels";
  gets(s);
 
  for(i = 0; s[i] != '\0'; i++) {
    if(check_vowel(s[i]) == 0) {       //not a vowel
      t[j] = s[i];
      j++;
    }
  }
 
  t[j] = '\0';
 
  strcpy(s, t);    
 
  cout<<"String after deleting vowels: "<<s;
  getch();
  return 0;
}
 
int check_vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
