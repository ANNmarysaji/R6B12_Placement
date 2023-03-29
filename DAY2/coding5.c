//pointers introduction
#include<stdio.h>
int main(){
 int a=12;
int *ptr=&a;
 printf("address of a direct:%p\n",&a);
 printf("addr of a using pointer:%p\n",ptr);
 printf("value of a :%d\n",a);
 printf("value of a using pointer :%d",*ptr);
return 0;
}