#include<stdio.h>
int main(){
   int n=5;
   int i=0,s=0;
int p,r;
  while(n>0){
     r=n%10;
     p=8^i;
     s=s+p*r;
     i=i+1;
     n=n/10;
 }
printf("%d",s);
return 0;
}
