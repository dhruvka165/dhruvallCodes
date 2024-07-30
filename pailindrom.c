#include<stdio.h>
int main(){
    int n,reverced = 0,remainder,orignal;
    printf("Enter an integer");
    scanf("%d",&n);
    orignal= n;

    while (n !=0)
    {
        remainder = n%10;
        reverced = reverced *10 + remainder;
        n/=10;
    }
    if(orignal ==reverced)
    printf("%d is pailindrome",orignal);

    else
    printf("%d is not pailindrome ",orignal);
    return 0;
    
}