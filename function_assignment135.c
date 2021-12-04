// Find the length of a string
#include<stdio.h>
#include<string.h>
void l(){
 char str[100];
    int len;

    printf("\n Please Enter any String :  ");
    gets(str);

    len = strlen(str);
    printf("Length of the string : %d\n",len);

}
int main(){
 l();
return 0;
}
