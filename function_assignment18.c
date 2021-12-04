//character is uppercase,lowercase,special characteror digit
#include<stdio.h>
void ch();
void ch(){
 char a;
 printf("Enter a character(A-Z):\n");
 scanf("%c",&a);
if(a>='A'&&a<='Z')
  printf("character is uppercase: %c\n",a);
else if(a>='a'&&a<='z')
      printf("character is  lowercase: %c\n",a);
     else if(a>='0' && a<='9' )
            printf("character is  digit: %c\n",a);
          else
            printf("character is  special character: %c\n",a);
}
int main(){
  ch();
return 0;
}
