// check weather a character is an alphabet or not
#include<stdio.h>
void ch();
void ch(){
 char a;
 printf("Enter a character(A-Z):\n");
 scanf("%c",&a);
if(a>='A'&& a<='Z' || a>='a'&& a<='z')
  printf("character is alphabet: %c\n",a);
else 
  printf("character is not alphabet: %c\n",a);
}
int main(){
  ch();
return 0;
}
