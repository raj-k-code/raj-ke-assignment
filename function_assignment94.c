//Sum of all array elements. – using recursion.
#include <stdio.h>
int findSum(int a[], int n)
{
    int sum=0;
    if (n <= 0)
        return sum;
     sum=(findSum(a,n-1) + a[n - 1]);
        
}
int main()
{
    int a[100],n;
    
    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
 
    printf("Sum of all elements: %d\n",findSum(a, n));
    return 0;
}
