///Merge two arrays to the third array.
#include<stdio.h>
void mergeArray(int a[], int n1, int b[], int n2, int mer[]);
int main(){
   int n1, n2, n3, i, j, k;  
   printf("\nEnter the  number of elements for First Array  :  ");
   scanf("%d", &n1);
    int a[n1];    
   printf("\nEnter the elements for First Array :  ");
   for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("\nEnter the number of elements for second Array :  ");
   scanf("%d", &n2);
    int b[n2];    
   printf("\nEnter the elements for Second Array :  ");
   for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    n3 = n1 + n2;    
  int mer[n3];     
    mergeArray(a, n1, b, n2, mer);    
   
  printf("\n Array Elements After Merging \n");
   for(i = 0; i < n3; i++)
      printf(" %d \t ",mer[i]);

    return 0;
}
void mergeArray(int a[], int n1, int b[], int n2, int mer[]){ 
  int i, j, k, n3;
  j = k = 0;
  n3 = n1 + n2; 
  for(i = 0; i < n3;){  
    if(j < n1 && k < n2){
      if(a[j] < b[k]){
        mer[i] = a[j];
        j++;
      }
      else{
        mer[i] = b[k];
        k++;
      }
      i++;
    }
    else if(j == n1)
    {
      while(i < n3)
      {
        mer[i] = b[k];
        k++;
        i++;
      }
    }
    else
    {
      while(i < n3)
      {
        mer[i] = a[j];
        j++;
        i++;
      }
    }
  }
}
	

