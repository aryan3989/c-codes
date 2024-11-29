//wap to display the elements of an array in revrse order
#include<stdio.h>
int main (){
 int size;
 printf("enter array  size : ");
   scanf("%d", &size);
 int arr[size];
 printf("enter array elements : ");
 for(int i=0; i<size; i++){
   scanf("%d", &arr[i]);
 }
 printf("array elements are : ");
 for(int i=size-1; i>=0; i--){
    printf("%d ",arr[i]);
 }
     return 0;
}