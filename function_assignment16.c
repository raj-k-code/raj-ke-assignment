//character is vowel or constant
#include<stdio.h>
void pn();
void pn(){
 char a;
 printf("Enter a character(A-Z):\n");
 scanf("%c",&a);
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
  printf("character is vowel: %c\n",a);
else 
  printf("character is constant: %c\n",a);
}
int main(){
  pn();
return 0;
}
