// Find a grade of given marks
#include<stdio.h>
void grade(int marks){
    if(marks>100)
     printf("\nPlease enter number in between 1 to 100\n");
   else
   {
   switch(marks/10)
   {
       case 10 :
       case 9 :
           printf("\n Your Grade is: A");
           break;
       case 8 :
           printf("\n Your Grade is: B" );
           break;
       case 7 :
           printf("\n Your Grade is: C" );
           break;
       case 6 :
           printf("\n Your Grade is: D" );
           break;
       case 5 :
           printf("\n Your Grade is: E" );
           break;
       case 4 :
           printf("\n Your Grade is: E--");
           break;
       default :
           printf("\n You Grade is: F or Fail\n");
   }
 }

}
int main()
{
   int marks;   
   printf("\nEnter The Marks Between 0 To 100:");   
   printf("\nEnter The Mark: ");
   scanf("%d", &marks);
   grade(marks);
   return 0;
}

