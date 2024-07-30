#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter principal rate and time ");
    scanf("%d%d%d ",&p,&r,&t);
    int si = p*r*t/100;
    printf("the simple intrest is %d",si);
    return 0;
}