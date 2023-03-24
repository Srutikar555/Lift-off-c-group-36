#include <stdio.h>

 int main()
{   int n,m,i;
    printf("enter size of the array\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter elements in array \n");
    for(i=0;i<n;i++)
    {   scanf("%d",&arr1[i]);}

    printf("enter size of the array");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter elements in array\n ");
    for(i=0;i<m;i++)
    {   scanf("%d",&arr2[i]);}

    int j=0;
    arr1[n+j]=arr2[j];
    for(j=0;j<m+n;j++)
    {printf("%d",arr1[j]);}
  return 0;
}