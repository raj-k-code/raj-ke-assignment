// Concatenate two string
#include <stdio.h>
#include <string.h>
void string(){
    char str1[100],str2[100];

    printf("\n Please Enter 1st String : ");
    gets(str1);
     printf("\n Please Enter second String : ");
    gets(str2);
    strcat(str1 ,str2);
    printf("Concatenated String: %s \n", str1);    
}
int main()
{
 string();
 return 0;
}

