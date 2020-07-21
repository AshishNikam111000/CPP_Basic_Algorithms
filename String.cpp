/*How to use String in C++ */
#include <iostream.h>
#include <conio.h>
 
main()
{
    char array[20] = "Hello World";
    cout<<endl<<array;
    
    /* Input String using cin */
    cout<<"\nEnter a String ";
    cin>>array;
    cout<<array;
    
    /* Input Multiword String using  gets() */
    cout<<"Enter a Multiword String ";
    gets(array);
    cout<<array;
    
    /*Note that cin can only input single word strings,
     to receive strings containing spaces use gets function.
    */
    
    getch(); 
    return 0;
}
