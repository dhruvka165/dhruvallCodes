#include<stdio.h>
#include<math.h>
 #define pi = 3.1415
int main(){
   int choice ;
   double radius,side,area;

   printf("Choose a shape to calculate the area :\n");
   printf("1.circle\n");
   printf("2.square\n");
   printf("3.sphere\n");
   printf("Enter your choice (1,2 or 3)");
   scanf("%d",&choice);

   switch (choice) {
    case 1:
    printf("Enter the radius of circle");
    scanf("%lf",&radius);
    area = 3.14*radius*radius;
    printf("The area of circle is %f \n",area);
    break;

    case 2:
    printf("Enter the side length of square");
    scanf("%lf",&side);
    area=side*side;
    printf("area of square is %f\n",area);
    break;

   
   case 3:
   printf("Enter a radius of sphare :");
   scanf("%lf",&radius);
   area = 4*3.14*radius*radius;printf("surface is %f\n",area);
   break;

   
   default:
   printf("invalid choice please choose1,2 or 3\n");

}


    
}