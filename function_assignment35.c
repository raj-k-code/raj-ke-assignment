//check character is uppercase or lowercase
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
     else
       printf("Invalid input..\n");
}
int main(){
  ch();
return 0;
}
