//Read and print elements of the array.-using recursion
#include<stdio.h>
void printArray(int arr[], int start, int len)
{
    if(start >= len)
        return;
    printf("%d, ", arr[start]);
    printArray(arr, start + 1, len); 
}
int main()
{
    int arr[100];
    int num, i;
    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter elements in the array: ");
    for(i=0; i<num; i++) 
        scanf("%d", &arr[i]);
    printf("Elements in the array: ");
    printArray(arr, 0, num);
    
    return 0;
}


