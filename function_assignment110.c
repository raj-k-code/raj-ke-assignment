// Sort array elements ascending or descending order
#include<stdio.h>
void sorting(){
 int i,n,j;
int temp=0;
 printf("Enter array limit..\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter %d elements\n",n);
  for(i=0; i<n; i++) 
    scanf("%d", &a[i]);
 printf("\n\nElement Before Sorting \n\n");
	for(i= 0; i<n; i++) 
	    printf("%d  ", a[i]);
	printf("\n");

  printf("\n\nElement After ascending Sorting \n\n");
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
for(i= 0; i<n; i++) 
    printf("%d  ", a[i]); 
 printf("\n\n");

  printf("\n\nElement After deascending Sorting \n\n");
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
for(i= 0; i<n; i++) 
    printf("%d  ", a[i]);
 printf("\n\n");

}
int main(){
 sorting();
return 0;
}
