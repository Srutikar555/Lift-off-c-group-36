#include<stdio.h>

int main(){
    int num,rem,sum=0;
    printf("enter a number\n");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    } while (num>0);
    printf("sum of the digits of the given number is %d", sum);
    

    return 0;
}