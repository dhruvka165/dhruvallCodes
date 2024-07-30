#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter no a and b");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping number 1 is%d and number 2 is %d ",a,b);
    return 0 ;

}