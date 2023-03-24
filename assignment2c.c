#include<stdio.h>

void sortArr(int arr[], int n){
    int buffer;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                buffer=arr[j];
                arr[j]=arr[i];
                arr[i]=buffer;
            }
        }
    }
}


int main()
{   int n,i;
    printf("enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array ");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);

    sortArr(arr,n);
    for(i=0;i<n;i++)
        printf("%d",arr[i]);

    return 0;



}