// Copy one string to another string
#include<stdio.h>
#include<string.h>
void copy(char str2[],char str1[]){
  int i;
   for(i=0; str1[i]!='\0'; i++){
        str2[i]=str1[i];      
   }
   str2[i]='\0';
}
int main(){
  char str1[100],str2[100];

    printf("\n Please Enter any String : ");
    gets(str1);
    copy(str2,str1);
    printf("After copying one string in another string: %s\n",str2);
return 0;
}
