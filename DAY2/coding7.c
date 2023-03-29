//swapping 2 nums using pointers
#include<stdio.h>
int main(){
  int a=8;
  int b=4;
  int *ptr1=&a,*ptr2=&b;
  printf("before swapping a:%d b:%d\n",a,b);
  *ptr1=*ptr1+*ptr2;
   *ptr2=*ptr1-*ptr2;
   *ptr1-=*ptr2;
  printf("after swapping a:%d b:%d\n",a,b);
 printf("quotient :%d\n",(*ptr2)/(*ptr1));
  return 0;
}