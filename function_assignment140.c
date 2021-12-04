// Convert uppercase string to lowercase
#include <stdio.h>
#include <string.h>
void lower(char *str){
  while(*str){
    if(*str >= 'A' && *str <='Z')
      *str = *str + 32;
      str++;
  }
}
int main(){
   int i,j;
   char str[100];
   printf("Enter string in upper case\n");
   scanf("%[^\n]%*c",str);
   if(*str>='A' && *str<='Z'){
     lower(str);
     printf("after changing string in lowercase : %s\n",str);
   }
   else
     printf("Invalid input\n");
   return  0;
}
