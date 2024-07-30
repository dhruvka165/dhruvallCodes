#include<stdio.h>
double calculateArea(double radius){
    return 3.14*radius*radius;
}
int main(){
    double radius;
    printf("Enter the radius of circle:");
    scanf("%lf",&radius);
    printf("Area of circle %f\n",calculateArea(radius));

    return 0;
}