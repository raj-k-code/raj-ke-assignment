// string care case change
#include <stdio.h>
#include <string.h>
void lower(char *str){
  while(*str){
    if(*str >= 'a' && *str <='z')
      *str = *str - 32;
    else if	(*str >= 'A' && *str <='Z')
      *str = *str + 32;
      str++;
  }
}
int main(){
   int i,j;
   char str[100];
   printf("Enter string\n");
   scanf("%[^\n]%*c",str);
   lower(str);
   printf("after changing : %s\n",str);
   return  0;
}
