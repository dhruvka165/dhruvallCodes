#include<stdio.h>

void swapnumber(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1,num2;
    printf("Enter number 1 and number 2");
    scanf("%d%d",&num1,&num2);
    printf("Orignal number is %d and%d \n",num1,num2);
    swapnumber(&num1,&num2);
     printf("swapped number is %d and%d \n",num1,num2);
     return 0;
}