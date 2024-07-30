#include<stdio.h>

    int calculatesquare(int num){
    return num*num;
}
int calculatecube(int num){
    return num*num*num;
}
int main(){
    int number;;
    printf("Enter a number");
    scanf("%d",&number);

    printf("square of %d is : %d\n",number,calculatesquare(number));
    printf("cube of &d is %d: %d\n",number,calculatecube(number));
    return 0;
}
