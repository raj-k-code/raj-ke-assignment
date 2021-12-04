//Convert a person's name in abbreviated
#include<stdio.h>
void name();
void name(){
 char fname[30],mname[30],lname[30];
  printf("Enter first middle and last name:\n");
  scanf("%s%s%s",fname,mname,lname);
  printf("Abbreviated name: %c.%c. %s\n",fname[0],mname[0],lname);
 }
int main(){
  name();
return 0;
}
