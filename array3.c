//wap to find the sum of all elements of array
#include<stdio.h>
int main (){
 int size,sum;
 printf("enter array  size : ");
   scanf("%d", &size);
 int arr[size];
 printf("enter array elements : ");
 for(int i=0; i<size; i++){
   scanf("%d", &arr[i]);
 }
 printf("sum of all arra elements : ");
   for(int i=0; i<size; i++)
   {
    sum=sum+arr[i];
   }
    printf("%d",sum);
    return 0;
}