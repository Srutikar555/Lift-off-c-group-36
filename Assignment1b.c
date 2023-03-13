#include<stdio.h>
#include<conio.h>
int main(){ 
    int num;
    printf ("Enter a number\n");
    scanf("%d", &num) ;
{ if (num>0) printf ("The number is positive\n");
 else if (num==0) printf ("The number is 0\n");
 else if (num<0) printf ("The number is negative\n");
}
return 0 ;
}