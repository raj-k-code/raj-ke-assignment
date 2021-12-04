// Print a calender taking input from user using loop
#include<stdio.h>
#include<stdlib.h>
void calender(){
      int i,j,k,day,dt=1;
    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d",&day);
if(day<=31){    
 printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d",&k);
    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf(" _________________________________________________\n\n");
    for(j=k;j>0;j--)
        printf("\t");
    while(dt<=day)
    {
        if(k!=0)
        {
         if(k%7==0)
         printf("\n");
        }
  printf("%d\t",dt);
        dt++;
        k++;
    }
}
else
 printf("Invalid days...\n"); 

}
int main()
{
  calender(); 
 return 0;
}
