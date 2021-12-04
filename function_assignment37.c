//Input month number and print number of days in that month.
#include <stdio.h>
void month(){
 int m;
   printf("Enter month number:\n");
   scanf("%d",&m);
    if(m==1||m==3|| m==5|| m==7|| m==8||m==10||m==12)
        printf("In this month 1 to 31 days are available..\n");
    else if(m==4|| m==6|| m==9|| m==11)
            printf("In this month 1 to 30 days are available..\n");
         else
            printf("In this month 1 to 28/29(if year is leap) days are available..\n");
}


int main()
{
   month();
  return 0;
}
