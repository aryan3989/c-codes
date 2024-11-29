//wap to perform the swapping of two numbers using third variable
#include<stdio.h>
int main(){
    int x,y,temp;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf(" the value afteer swapping x=%d and the value y=%d",x,y);
    return 0;
}