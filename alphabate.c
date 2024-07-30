#include<stdio.h>
int main(){
    char charactor;
    printf("Enter a charactor");
    scanf("%c",charactor);
    if(charactor >='a' && charactor<='z' || (charactor >='A' && charactor<='Z')){
        printf("%c is alphabate",charactor);
    }
    else{
        printf("%c charactor is not a alphabate",charactor);
    }
    return 0;
}