/*
C++ program to find hcf and lcm: The code below finds highest common factor and least common multiple of two integers.
HCF is also known as greatest common divisor(GCD) or greatest common factor(gcf).*/
#include <iostream.h>
 
int main() {
  int a, b, x, y, t, gcd, lcm;
 
  cout<<"Enter two integers\n";
  cin>>x>>y;
 
  a = x;
  b = y;
 
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
 
  gcd = a;
  lcm = (x*y)/gcd;
 
  cout<<"Greatest common divisor of "<<x<< "and " << y << "is "<<gcd;
  cout<<"Least common multiple of "<<x<<" and "<<y <<" is "<<lcm;
 
  return 0;
}
