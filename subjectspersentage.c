#include<stdio.h>
int main(){
    int fop,foc,fow,fa,maths;
    printf("Enter marks");
    scanf("%d%d%d%d%d",&fop,&foc,&fow,&fa,&maths);
    int total = fop+foc+fow+fa+maths;
    printf("%d the total is ",total);
    scanf("%d",&total);
    int persentage;
    persentage =(total/500)*100;
    printf("persentage is %d",persentage);
    return 0;

}