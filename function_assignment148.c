// find the First Occurrence of a Character in a given String 
#include <stdio.h>
#include <string.h>
void occurence(){
  	char str[100], ch;
  	int i, Flag;
  	i = Flag = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\nEnter the Character that you want to check occurence:  \n");
  	scanf("%c", &ch);  	
  	while(str[i] != '\0')
  	{
  		if(str[i] == ch)  
		{ 
  			Flag++;
			break;    	
 		}
 		i++;
	}
        if(Flag == 0)
  		printf("\n Sorry!! not found Character '%c' ", ch);
	else
		printf("\n The First Occurence of the Search Element '%c' is at Position %d ", ch, i + 1);  
}
int main(){
 occurence();
return 0;
}
