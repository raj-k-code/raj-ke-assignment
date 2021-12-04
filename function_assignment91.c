//Convert all input string simultaneously into asterisk(*)
#include<stdio.h>
int main()
{
 char ch[]="**********.";
 char c='A';
 int i=0,j;

 printf("Write Your Name \n\n");

 while(c)
 {
  c=gets(ch);
  printf("%c",ch[i]);
  i++;
  if(i==10)
  {
   printf(" "); 
   i=0;
  }
 }
return 0;
}
/*	
 char ch[]="**********.";
 char c='A';
 int i=0,j;

 printf("Write Your Name \n\n");
 scanf("%s",ch);
for(i=0; i<10; ){
 printf("%c\a",ch[i]);
  i++;
}
  if(i==10)
  {
   printf(" "); 
   i=0;
  }*/
