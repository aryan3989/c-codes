//wap to perform the sum of each rown and column of 2d array
#include<stdio.h>
int main()
{
 int rows,columns;
 printf("enter the number of rows");
 scanf("%d",&rows);
 printf("enter the number of columns");
 scanf("%d",&columns);
 int array[rows][columns];
 int sum = 0;
 printf("enter elements of the array:\n");
 for(int i=0; i<rows ;i++)
 {
 for (int j = 0; j< columns; j++);
 }
 {
    printf("enter [%d][%d]: ", i, j);
    scanf("%d",&array[i][j]);
    sum += array[i][j];
 }
  printf(" the sum of all elements in 2d array is %d\n,sum);


    return 0;
}