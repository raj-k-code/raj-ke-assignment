// check voting eligibility
#include<stdio.h>
void age();
void age(){
 int dd,mm,yy;
 printf("Enter your DOB(DD/MM/YY):\n");
 scanf("%d/%d/%d",&dd,&mm,&yy);
  if(2021-yy>=18)
    printf("You eligible for voting...\n");
  else
    printf("Phle bada to ho ja fir de dena vote..\n");
}
int main(){
  age();
return 0;
}
