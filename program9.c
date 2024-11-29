//wap to find the area and perimeter of circle,square and rectangle
#include<stdio.h>
#include<math.h>
int main(){
    int length,breadth,side;
    float radius,area,perimeter_c;
    printf("enter the side: ");
    scanf("%d",&side);
    printf("enter the length: ");
    scanf("%d",&length);
    printf("enter the breadth: ");
    scanf("%d",&breadth);
    printf("enter  the radius: ");
    scanf("%f",&radius);
    float area_circle=3.14*radius*radius;
    int area_sq=side*side;
    int area_r=length*breadth;
    perimeter_c=2*3.14*radius;
    int perimeter_r=2*(length+breadth);
    int perimeter_sq=4*side;
    printf("area of circle=%f\n",area_circle);
    printf("area of square=%d\n",area_sq);
    printf("area of rectangle=%d\n",area_r);
    printf("perimeter of rectangle=%d\n,perimeter_r");
    printf("perimeter of square=%d\n,perimeter_Sq");
    printf("perimeterof circle=%f\n",perimeter_c);
   return 0;
}