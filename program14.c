//wap to convert the tenperature given in farenheit to celsius. c = (f-32)*5/9
#include<stdio.h>
#include<math.h>
int main(){
 float c,f;
 printf("enter the temperature in farenheit: ");
 scanf("%f",&f);
 c = (f-32)*5/9;
 printf("temperature in celsius=%f",c);
     return 0 ;
}