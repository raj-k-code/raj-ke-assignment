//Print "I AM IDIOT" instead of your name using array
#include<stdio.h>
void name(){
	char ch[]={"I AM IDIOT. "};
	char name[100];
	printf("Write Your Name \n\n");
	scanf("%s",name);  
	printf("%s",ch);
	printf("%s\n",name);

}

int main()
{
  name();
return 0;
}
