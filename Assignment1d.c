#include<stdio.h>
int main(){
    char operator;
    int num1,num2;
    printf("enter any arithmatic operator");
    scanf("%c",&operator);
    printf("enter num1");
    scanf("%d",&num1);
    printf("enter num2");
    scanf("%d",&num2);
    switch(operator){
      case'+':
          printf("addition of two number is %d\n", num1+num2);
          break;
      case'-':
          printf("substraction of two number is %d\n", num1-num2);
          break;
      case'/':
          printf("division of two number is %d\n",num1/num2);
          break;
      case'*':
          printf("multipication of two numbers are %d\n", num1*num2);
          break;
      case'%':
          printf("modulo of two numbers are %d\n",num1%num2);
          break;
      default:
          printf("You have entered the wrong operator\n");    

    }
    return 0;
}