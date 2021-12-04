//WAP to input week number and print week day
#include<stdio.h>
int main(){
int week;
 printf("enter week number(1 to 7)\n");
 scanf("%d",&week);
 if(week==1)
 printf("SUNDAY\n");
else
{
if(week==2)
 printf("MONDAY\n");
else

if(week==3)
 printf("TUESDAY\n");
else

if(week==4)
 printf("WEDNESDAY\n");
else

if(week==5)
 printf("THURSDAY\n");
else

if(week==6)
 printf("FRIDAY\n");
else

if(week==7)
 printf("SATURDAY\n");
else
 printf("input is invailid\n");
}

return 0;
}

