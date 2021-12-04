// Search an element in an array
#include <stdio.h>
void search(){
    int size, i, toSearch, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0;
   
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
        printf("\n%d is found at position %d\n", toSearch, i + 1);
    else
        printf("\n%d is not found in the array\n", toSearch);
}
int main(){
    search();
  return 0;
}
	

