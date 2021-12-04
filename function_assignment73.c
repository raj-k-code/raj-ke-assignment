// Find the day
#include<stdio.h>
void day(){
int week;
 printf("enter day number(1 to 7)\n");
 scanf("%d",&week);
switch(week){

case 1: printf("SUNDAY\n");
        break;
case 2: printf("MONDAY\n");
        break; 
case 3:  printf("TUESDAY\n");
         break;
case 4:  printf("WEDNESDAY\n");
         break;          
case 5:  printf("THURSDAY\n");
         break; 
case 6:  printf("FRIDAY\n");
         break;
case 7:  printf("SATURDAY\n");
         break;
default: printf("input is invailid\n");

}
}

int main(){
  day();
return 0;
}
