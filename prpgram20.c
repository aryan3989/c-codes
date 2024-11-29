#include<stdio.h>
#include<string.h>
int main(){
char  str[30];
printf("enter string : ");
gets (str);
int alph=0, digit = 0, symbol = 0;
int len = strlen(str);
for(int i=0; i<len; i++){
    if(( str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    alph++;
    else if(str[i]>=48 && str[i]<+57)
      digit++;
      else 
      symbol++;
}
 printf("total alphabets =d\n,alph");
 printf("total digit = %d\n,digit");
 printf("total symbol = %d\n,symbol");
 return 0;
}