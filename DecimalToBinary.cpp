#include <iostream.h>
/*
C++ program to convert decimal to binary: C++ language code to convert an integer
from decimal number system(base-10) to binary number system(base-2).
Size of integer is assumed to be 16 bits. We use bitwise operators to perform the desired task.
We right shift the original number by 15, 14, 13, ..., 1, 0 bits using a loop
and bitwise AND the number obtained with 1(one), if the result is 1 then that bit is 1 otherwise it is 0(zero).*/ 
#include<conio.h> 
int main()
{
  int n, c, k;
 
  cout<<"Enter an integer in decimal number system\n";
  cin>>n;
 
  cout<<n <<" in binary number system is:\n";
 
  for (c = 15; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      cout<<"1";
    else
      cout<<"0";
  }
 
  cout<<endl;
  getch();
  return 0;
}
