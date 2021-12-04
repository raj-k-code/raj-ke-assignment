// Find the reverse of a string
#include<stdio.h>
#include<string.h>
char * reverse(char s[]){
static char rev[100];
int l,i=0;
l=strlen(s)-1;
  while(l>=0){
    rev[i++]=s[l--];
  } 
  rev[i]='\0';
  return rev;
}
int main(){
 char s[100];
 char *p;
  printf("Enter a string...\n");
  gets(s);
  
  p=reverse(s);
 printf("After reversing the string : %s\n",p);
return 0;
}
