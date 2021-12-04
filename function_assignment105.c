// Delete all duplicate elements from an array
#include <stdio.h>
int delete_duplicate(int arr[], int size)
{
  int i,j,k;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        for (k = j; k < size; k++)
        {
          arr[k] = arr[k + 1];
        }
        size--;
        j--;
      }
    }
  }
  printf("\n Final Array after Deleteing Duplicate Array Elements is:\n");
  for (i = 0; i < size; i++)
  {
    printf("%d\t", arr[i]);
  }
}
int main()
{
  int arr[10], i, size;
  printf("\n Please Enter Number of elements in an array  :   ");
  scanf("%d", &size);

  printf("\n Please Enter %d elements of an Array \n", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  delete_duplicate(arr, size);
  return 0;
}
