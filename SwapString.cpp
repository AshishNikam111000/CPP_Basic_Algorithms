// C++ program to swap two strings 
#include<iostream.h>
#include<string.h>
#include<conio.h>
 
main()
{
   char first[100], second[100], temp[200];
 
   cout<<"Enter the first string ";
   gets(first);
 
   cout<<"Enter the second string ";
   gets(second);
 
   cout<<"\nBefore Swapping\n";
   cout<<"First string:  "<<first<<endl;
   cout<<"Second string: "<<second;
 
  strcpy(temp,first);
   strcpy(first,second);
   strcpy(second,temp);
 
   cout<<"After Swapping\n";
   cout<<"First string: "<<first<<endl;
   cout<<"Second string: "<<second;
 
   getch();
   return 0;
}
