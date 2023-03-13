#include<stdio.h>
#include<conio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    printf("diameter of the circle is %f \n",2*radius);
    printf("circumference of the circle is %f\n", 2*3.14*radius);
    printf("area of the circle is %f\n",3.14*radius*radius);
    return 0 ;
}