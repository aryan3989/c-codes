// wap to find total marks and percentage of five subjects marks
#include<stdio.h>
#include<math.h>
int main(){
    int m1,m2,m3,m4,m5;
    printf("enter the valuee of m1,m2,m3,m4,m5\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int total_marks=m1+m2+m3+m4+m5;
    float percentage=total_marks/5;
    printf("total_marks=%d,percentage=%f",total_marks,percentage);
    return 0;
}