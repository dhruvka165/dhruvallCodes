#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2;
    printf("Enter a cofficient a b and c");
    scanf("%d%d%d",&a,&b,&c);
    discriminant = b*b - 4*a*c;


    root1 = (-b+sqrt(discriminant))/2*a;
    root2 = (-b+sqrt(discriminant))/2*a;
    printf("roots are real ad distinct %f and %f \n",root1,root2);
} 
