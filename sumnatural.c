#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a natural number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
       sum+=i;

    }
printf("sum is %d",sum);
return 0;
}