// Convert lowercase string to uppercase
#include <stdio.h>
#include <string.h>
void lower(char *str){
  while(*str){
    if(*str >= 'a' && *str <='z')
      *str = *str - 32;
      str++;
  }
}
int main(){
   int i,j;
   char str[100];
   printf("Enter string in lower case\n");
   scanf("%[^\n]%*c",str);
   if(*str>='a' && *str<='z'){
     lower(str);
     printf("after changing string in uppercase : %s\n",str);
   }
   else
     printf("Invalid input\n");
   return  0;
}
