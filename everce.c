#include<stdio.h>
int main(){
    int n,reverce=0,remainder;

    printf("Enter an integer");
    scanf("%d ",&n);

    while (n!=0)
    {
        remainder = n%10;
        reverce = reverce *10+remainder;
        n/=10;
    }
    printf("Reversed number = %d",reverce);
    return 0;
    
}