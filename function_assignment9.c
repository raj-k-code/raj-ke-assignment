//The Display Size of the Different Data Type
#include <stdio.h>
void size();
void size(){

  int a;
  char b;
  float c;
  double d;
  printf("Size of Integer: %d \n",sizeof(a));
  printf("Size of character: %d \n",sizeof(b));
  printf("Size of float %d: \n",sizeof(c));
  
  printf("Size of double: %d \n",sizeof(d));
  
}
int main()
{
  size();
  return 0;
}
