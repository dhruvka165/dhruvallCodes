#include<stdio.h>
int main(){
    int dividend,quotient,remainder,divisor;
    printf("enter a dividend");
    scanf("%d",&dividend);
    printf("Enter a divisor");
    scanf("%d",&divisor);
    remainder = dividend %divisor;
    quotient=dividend/divisor;
    printf("quotient is %d\n",quotient);
    printf("remainder is %d",remainder);
    return 0;

}