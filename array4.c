//wap to copy the data from one array to anothr array
#include<stdio.h>
int main (){
 int size,sum;
 printf("enter array  size : ");
   scanf("%d", &size);
 int arr1[size];
 printf("enter array elements : ");
 for(int i=0; i<size; i++){
   scanf("%d", &arr1[i]);
  }
  int arr2[size];
 for(int i=0; i<size; i++){
    arr2[i] = arr1[i];
 }
 printf("array2 elements are : ");
 for(int i=0; i<size; i++){
    printf("%d ",arr2[i]);
 }
  return 0;
}