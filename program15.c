// wap tp perform the sum of 1 to n. sum=(n*(n+1))/2
#include<stdio.h>
int main(){
    int n, sum;
    printf("enter the value of non zero: ");
    scanf("%d",&n);
    n = (n*(n+1)/2);
    printf("%d",n);
    return 0;
}