#include<stdio.h>

void sepArr(int arr[], int n){
    int buffer;
    for(int i=0;i<n;i++){
        if(arr[i]<0)continue;
        for(int j=i+1;j<n;j++){
            if(arr[j]<0){
                buffer=arr[j];
                arr[j]=arr[i];
                arr[i]=buffer;
                break;
            }

        }
    }
}


int main()
{   int n,i;
    printf("enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array \n");
    for(i=0;i<n;i++)
     scanf("%d",&arr[i]);

    sepArr(arr,n);
    printf("serpararted array");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;



}
