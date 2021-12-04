// find the last Occurrence of a Character in a given String 
#include <stdio.h>
#include <string.h>
void string(){
  	char str[100], ch;
  	int i, index;
  	index = -1;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
  			index = i;	
	}
        if(index == -1)
  		printf("\n Sorry!! We haven't found the the Search Element '%c' ", ch);
	else
		printf("\n The Last Occurrence of the Search Element '%c' at Position %d \n", ch, index + 1);	  
}
int main(){
 string();
return 0;
}
