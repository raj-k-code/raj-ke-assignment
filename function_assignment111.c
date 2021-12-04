//Sort even and odd elements of an array in two separate arrays.
#include <stdio.h>
int array(int *a,int n){
    int i;
    for(i=0; i<n; i++)
      printf("%d  ",a[i]);
}
int main(){
    int a[10000],b[10000],c[20000],i,j,k,n ;
    printf("Enter size of the  array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

     printf("\n original array  \n");
    array(a,n);

    j=k=0;
    for(i=0; i<n; i++){
        if(a[i]%2==0)
          b[j++]=a[i];
        else
          c[k++]=a[i];
    }
    printf(" \n even array \n");
    array(b,j);
    array(c,k);

return 0;
}
