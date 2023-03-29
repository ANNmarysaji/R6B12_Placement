//swapping 2 nums using temp var
//pointers cannot be added as it may go beyond accessible addresses
//subtraction is valid 
#include<stdio.h>
int main(){
  int a=4;
  int temp;
  int b=5;
  printf("before swapping a:%d b:%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("after swapping a:%d b:%d\n",a,b);
  return 0;
}