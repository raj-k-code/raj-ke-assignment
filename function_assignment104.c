//Count the total number of duplicate elements in an array.
#include <stdio.h>
void duplicate(){
    int i, j, size, count = 0;

    printf("Enter size of the array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d\n", count);
}
int main(){
    duplicate();
    return 0;
} 
