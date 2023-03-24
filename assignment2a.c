#include <stdio.h>

int countoccurence(int arr[], int size, int x)
{
    int count=0;
    for (int i=0; i< size; i++)
      if(x==arr[i])
      count++;
    return count;  
}
  int main()
{   int n,i,x;
    printf("enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array ");
    for(i=0;i<n;i++)
    {   scanf("%d",&arr[i]);}


    printf("enter the num occurence want to know\n");
    scanf("%d",&x);

    printf("%d",countoccurence(arr, n, x));
    return 0;
}