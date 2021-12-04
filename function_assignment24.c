// the date is correct or not
#include<stdio.h>
void greater();
void greater(){
 int dd,mm,yy;
 printf("Enter (DD/MM/YY):\n");
 scanf("%d/%d/%d",&dd,&mm,&yy);
  if(yy>=1900 && yy<=9999){ 
     if(mm>=1 && mm<=12){
        if((dd>=1 && dd<=31)&&(mm==1 ||mm==3 ||mm==5 ||mm==7 ||mm==8 ||mm==10 ||mm==11))
           printf("Date is valid: %d/%d/%d\n",dd,mm,yy);
        else if((dd>=1 && dd<=30)&&(mm==4 ||mm==6 ||mm==9 ||mm==12 ))
               printf("Date is valid: %d/%d/%d\n",dd,mm,yy);
             else if((dd>=1 && dd<=28)&& mm==2 ) 
                    printf("Date is valid: %d/%d/%d\n",dd,mm,yy);
                  else if((dd==29 && mm==2)&&(yy%4==0)) 
                          printf("Date is valid: %d/%d/%d\n",dd,mm,yy);
                       else
                          printf("Date is invalid..\n");
     }
     else 
        printf("Month is invalid..\n");        
  }
  else
     printf("Year is invalid..\n");
  
}
int main(){
  greater();
return 0;
}
