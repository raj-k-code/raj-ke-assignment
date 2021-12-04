// temperature conversion celsius to fehrenheit and vice versa
#include<stdio.h>
void convert(){
 char a;
 float tem;
 printf("enter \"c\" for fehrnite to celcius\n");
 printf("enter \"f\" for celcius to fehrnite\n");
 scanf("%c",&a);

    switch{
	 case'c':printf("enter celcius temperature:\n");
		 scanf("%f",&tem);
		 tem=(tem*9/5.0f)+32;
		 printf("after changing celcius to fehrnite:%f\n",tem);
	 case'C':printf("enter celcius temperature:\n");
		 scanf("%f",&tem);
		 tem=(tem*9/5.0f)+32;
		 printf("after changing celcius to fehrnite:%f\n",tem);
       
	 case'f':printf("enter fehrnite temperature:\n");
		 scanf("%f",&tem);
		 tem=(tem-32)*5/9.0f;
		 printf("after changing fehrnite to celcius:%f\n",tem);
	 case'F':printf("enter fehrnite temperature:\n");
		 scanf("%f",&tem);
		 tem=(tem-32)*5/9.0f;
		 printf("after changing fehrnite to celcius:%f\n",tem);
         default: printf("Invalid input..\n"); 
    }

}
int main(){
 convert();
return 0;
}
