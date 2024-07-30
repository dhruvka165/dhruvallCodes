#include<stdio.h>
int calculatesum(int array[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum +=array[i];
    }
    return sum;
}
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int myArr[size];
    printf("Enter %d element",size);
    for(int i=0;i<size;i++){
        scanf("%d",&myArr[i]);
    }
    int sum=calculatesum(myArr,size);
    printf("sum of element is array %d\n",sum);
    return 0;
}