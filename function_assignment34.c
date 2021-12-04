// check a character is alphabet ,digit or special character
#include<stdio.h>
void ch();
void ch(){
 char a;
 printf("Enter a character(A-Z):\n");
 scanf("%c",&a);
if(a>='A'&& a<='Z' || a>='a'&& a<='z')
  printf("character is alphabet: %c\n",a);
else if(a>='0' && a<='9' )
        printf("character is  digit: %c\n",a);
     else
        printf("character is  special character: %c\n",a);

}
int main(){
  ch();
return 0;
}
