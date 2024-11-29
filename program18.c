#include<stdio.h>
 #include<string.h>
 int main(){
    char str1[20], str2[10];
    printf("enter string-1 : ");
    gets(str1);
    printf("enter string2-1 : ");
    gets(str2);
    int   x = strcmp(str1, str2);
    if(x == 0)
      printf(" both the strings are same");
      else if(x == 1)
      printf("string-1 is greater then string-2");
      else
          printf("string-1 is less then string-2");
          return 0;
 }