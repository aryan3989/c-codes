 //wap to find the greatest mong three numbers
 #include<stdio.h>
 #include<conio.h>
int main(){
 int a,b,c;
 prntf("enter three numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b && a<c){
    printf("%d is greater",a);
 }else if(b<a && b<c){
    printf("%d is greater",b);
 }else(c<a && c<b);
    {printf("%d is greater",c);
 }

    return 0;
}