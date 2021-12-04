// Find reverse of an array
#include<stdio.h>
void reverse(){
int size,i,j,temp;
printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

     printf("Before reversing...\n");
     for(i=0; i<size; i++)
        printf("%d\t", arr[i]);
        printf("\n");

    
     for(i=0,j=size-1; i<j; i++,j--){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;  
     }
     printf("After reversing...\n");
     for(i=0; i<size; i++)
        printf("%d\t", arr[i]);
        printf("\n");
}
int main(){
  reverse();
return 0;
}
