//wap to perform the swapping of two numbers without using third variable
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf(" the value after swapping x=%d and the value after swapping y=%d",x,y);
    return 0;
}