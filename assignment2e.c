#include <stdio.h>

int main()
{
  int i, n;
    int a[n];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);}
    int b[n];


    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("The first array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nThe second array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}