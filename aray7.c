//wap to find the sum of diagoanl elements of a 2d array
#include<stdio.h>
int main(){
    int row,col;
    pintf(" enter row and col size :");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("enter array eklements : ");
    for(int i = 0; i<row; i++)
    {
        for (int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //logic perform to add main diagonals elements
    int sum = 0;
    for(int i=0;i<row; i++){
        sum +=arr[i][i];
    }
    //logic perform  to add minor diagonals elements
    int sum1 = 0;
    for( int i=0,j=col-1;i<row && j>=0; j++ , j--){
        sum1 += arr[i][j];
    }
    printf("sum of main diagonal elements are : %d\n" , sum);
    printf("sum of minor diagonal elements are: %d\n", sum1);
    return 0;
}